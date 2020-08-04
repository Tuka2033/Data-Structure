#include"linkList.h"
cLinkList::cLinkList()
{
	head = NULL;
	temp = NULL;
	cnt = 0;
}
cLinkList::cLinkList(node* n)
{
	head = n;
}
void  cLinkList::creat_list(int data1)
{
	node* newnode = new node();
	newnode->data = data1;
	if (head == 0)
	{
		head = newnode;
	}
	else
	{
		temp->next = newnode;
	}
	temp = newnode;
	cnt++;
}
void  cLinkList::add_beg(int data1)
{
	node* n1 = new node();
	n1->data = data1;
	n1->next = head;
	head = n1;
	cnt++;
}
void  cLinkList::add_mid(int data1, int pos)
{
	node* n1 = new node();
	n1->data = data1;
	temp = head;
	for (int i = 1; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	n1->next = temp->next;
	temp->next = n1;
	cnt++;
}
void  cLinkList::add_end(int data1)
{
	node* n1 = new node();
	n1->data = data1;
	n1->next = NULL;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n1;
	cnt++;
}
void  cLinkList::delete_beg()
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
	{
		temp = head;
		head = head->next;
		cout << "\nDeleted Element is:" << temp->data << endl;
		delete(temp);
	}
}
void  cLinkList::delete_mid(int pos)
{
	node* ptr = head;
	for (int i = 1; i < pos; i++)
	{
		temp = ptr;
		ptr = ptr->next;
	}
	cout << "\nDeleted Element is: " << ptr->data << endl;
	temp->next = ptr->next;
	delete(ptr);
}
void  cLinkList::delete_end()
{
	temp = head;
	if (head == NULL)
	{
		cout << "\nList is empty" << endl;
	}
	else
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		node* ptr = temp->next;
		cout << "\nDeleted Element is:" << ptr->data << endl;
		temp->next = NULL;
		delete(ptr);
	}
}
void  cLinkList::display()
{
	temp = head;
	while (temp != NULL)
	{
		if (temp == head)
		{
			cout << "\n****************** LINKED LIST :**********************\n";
			cout << "\n\t[HEAD] -->[" << temp->data << "]";
		}
		else
		{
			cout << "-->[" << temp->data << "]";
		}
		temp = temp->next;
	}
	cout << "\n\n###########################################################\n";
}
void  cLinkList::insert(int data1, int pos)
{
	if (pos > cnt)
	{
		add_end(data1);
	}
	else if (pos == 1)
	{
		add_beg(data1);
	}
	else if ((pos > 1) && (pos <= cnt))
	{
		add_mid(data1, pos);
	}
}
void  cLinkList::delete_ele(int pos)
{
	if (pos > cnt)
	{
		delete_end();
	}
	else if (pos == 1)
	{
		delete_beg();
	}
	else if ((pos > 1) && (pos <= cnt))
	{
		delete_mid(pos);
	}
}
void  cLinkList::search(int key)
{
	temp = head;
	while (temp->next != NULL)
	{
		if (temp->data == key)
		{
			cout << "Element found..." << endl;
			return;
		}
		temp = temp->next;
	}
	cout << "Element not found." << endl;
}
void  cLinkList::sort()
{
	temp = head;
	node* i, * j;
	int t;
	for (i = temp; i->next != NULL; i = i->next)
	{
		for (j = i->next; j != NULL; j = j->next)
		{
			if (i->data > j->data)
			{
				t = i->data;
				i->data = j->data;
				j->data = t;
			}
		}
	}
}
void cLinkList::reverse()
{
	node* prev, * cur;
	if (head != NULL)
	{
		prev = head;
		cur = head->next;
		head = head->next;
		prev->next = NULL;
		while (head != NULL)
		{
			head = head->next;
			cur->next = prev;
			prev = cur;
			cur = head;
		}
		head = prev;
	}
}