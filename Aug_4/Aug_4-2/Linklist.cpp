#include"Linklist.h"

clinkList::clinkList()
{
	head = NULL;
	cnt = 0;
}

void clinkList::creat_list(cEmployee e1)
{
	Node* temp;
	Node* newnode = new Node();
	newnode->e = e1;
	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	cnt++;
}
void clinkList::add_beg(cEmployee e1)
{
    Node* newnode = new Node();
	newnode->e = e1;
	newnode->next = head;
	head = newnode;
	cnt++;
}
void clinkList::add_mid(cEmployee e1, int pos)
{
	Node* temp;
	Node* n1 = new Node();
	n1->e = e1;
	temp = head;
	for (int i = 1; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	n1->next = temp->next;
	temp->next = n1;
	cnt++;
}
void clinkList::add_end(cEmployee e1)
{
	Node* temp;
	Node* n1 = new Node();
	n1->e = e1;
	n1->next = NULL;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n1;
	cnt++;
}
void clinkList::insert(cEmployee e, int pos)
{
	if (pos > cnt)
	{
		add_end(e);
	}
	else if (pos == 1)
	{
		add_beg(e);
	}
	else if ((pos > 1) && (pos <= cnt))
	{
		add_mid(e, pos);
	}
}
void clinkList::delete_beg()
{
	Node* temp;
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
	{
		temp = head;
		head = head->next;
		cout << "\nDeleted Element is:" << temp->e;
		delete temp;
		cnt--;
	}
}
void clinkList::delete_mid(int pos)
{
	Node* temp=head;
	Node* ptr = head;
	for (int i = 1; i < pos; i++)
	{
		temp = ptr;
		ptr = ptr->next;
	}
	cout << "\nDeleted Element is: " << ptr->e;
	temp->next = ptr->next;
	delete(ptr);
	cnt--;
}
void clinkList::delete_end()
{
	Node* temp;
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
		Node* ptr = temp->next;
		cout << "\nDeleted Element is:" << ptr->e;
		temp->next = NULL;
		delete(ptr);
		cnt--;
	}
}
void clinkList::delete_ele(int pos)
{
	if (cnt == 0)
	{
		cout << "\nList is Empty...........!!!!!!!!!!\n";
		return ;
	}
	if (pos > cnt)
	{
		if (pos == cnt)
		{
			delete_end();
		}
		else
		{
			cout << "\n Please Enter Delete position in between 1 to " << cnt;
		}
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
void clinkList::display()
	{
	    Node* temp;
		temp = head;
		cout << "\n****************** LINKED LIST :**********************\n";
		while (temp != NULL)
		{
			cout<<temp->e;
			temp = temp->next;
		}
		cout << "\n###########################################################\n";

	}
clinkList::~clinkList()
{
	Node* temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
    }
}
