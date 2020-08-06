#include"CircularSingly.h"
CircularList::CircularList()
{
	head = NULL;
	cnt = 0;
}
void CircularList::CreateList(int val)
{
	node* temp;
	node* newnode = new node(val);
	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		cnt++;
	}
	newnode->next = head;
}
void CircularList::AddBegin(int val)
{
	node* temp;
	node* newnode = new node(val);
	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		newnode->next = head;
		head = newnode;
		temp->next=head;
		cnt++;
	}
}
void CircularList::AddMid(int val, int pos)
{
	node* temp;
	node* newnode = new node(val);
	temp = head;
	for (int i = 1; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	cnt++;
}
void CircularList::AddEnd(int val)
{
	node* temp;
	node* newnode = new node(val);
	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
		cnt++;
	}
}
void CircularList::DelBegin()
{
	node* temp,*ptr;
	if (head == NULL)
	{
		cout << "\nList is empty......!!!!!!!\n" << endl;
	}
	else
	{
		temp = head;
		ptr = head;
		while (ptr->next != head)
		{
			ptr = ptr->next;
		}
		head = head->next;
		ptr->next = head;
		delete(temp);
		cnt--;
	}
}
void CircularList::DelMid(int pos)
{
	node* temp = head;
	node* ptr = head;
	for (int i = 1; i < pos; i++)
	{
		temp = ptr;
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	delete(ptr);
	cnt--;
}
void CircularList::DelEnd()
{
	node* temp,*ptr;
	temp = head;
	if (head == NULL)
	{
		cout << "\nList is empty.......!!!!!!\n" << endl;
	}
	else
	{
		while (temp->next->next != head)
		{
			temp = temp->next;
		}
		ptr = temp->next;
		temp->next = head;
		delete(ptr);
		cnt--;
	}
}
void CircularList::Display()
{
	node* temp;
	if (head == NULL)
	{
		cout << "\nList is empty........!!!!!!!!\n";
	}
	else
	{
		temp = head;
		while (temp->next != head)
		{
			cout << temp->data << ends;
			temp = temp->next;
		}
		cout << temp->data;
	}
	cout << endl;
}