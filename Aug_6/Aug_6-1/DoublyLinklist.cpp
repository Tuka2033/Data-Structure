#include"DoblyLinklist.h"
Doublylinklist::Doublylinklist()
{
	head = NULL;
	tail = NULL;
	cnt = 0;
}
void Doublylinklist::CreateList(int val)
{
	node* newnode = new node(val);
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	cnt++;
}
void Doublylinklist::AddBegin(int val)
{
	node* newnode = new node(val);
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
	cnt++;
}
void Doublylinklist::AddMid(int val,int pos)
{
	node* temp;
	node* newnode = new node(val);
	temp = head;
	for (int i = 0; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	newnode->next=temp-> next;
	newnode->prev = temp;
	temp->next->prev = newnode;
	temp->next = newnode;
	cnt++;
}
void Doublylinklist::AddEnd(int val)
{
	node* newnode = new node(val);
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->prev = tail;
		tail->next = newnode;
		tail = newnode;
	}
	cnt++;
}
void Doublylinklist::DelBegin()
{
	node* temp;
	temp = head;
	if (head == NULL)
	{
		cout << "\nList is empty.....!!!!!!!!!!!!!\n";
	}
	else
	{
		head = head->next;
		head->prev = NULL;
		delete temp;
		cnt--;
	}
}
void Doublylinklist::DelMid(int pos)
{
	node* temp;
	node* ptr;
	temp = head;
	ptr = head;
	for (int i = 1; i < pos-1 ; i++)
	{
		temp = temp->next;
	}
	ptr = temp->next;
	temp->next = temp->next->next;
	temp->next->prev = temp;
	delete ptr;
	cnt--;
}
void Doublylinklist::DelEnd()
{
	node* temp;
	temp = tail;
	if (tail == NULL)
	{
		cout << "\nList is empty.....!!!!!!!!!!!!!\n";
	}
	else
	{
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
		cnt--;
	}
}
void Doublylinklist::sort()
{
	node* temp;
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
void Doublylinklist::ForwardDisplay()
{
	node* temp;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data<<ends;
		temp = temp->next;
	}
	cout << endl;
}
void Doublylinklist::ReversedDisplay()
{
	node* temp;
	temp = tail;
	while (temp != NULL)
	{
		cout << temp->data << ends;
		temp = temp->prev;
	}
	cout << endl;
}