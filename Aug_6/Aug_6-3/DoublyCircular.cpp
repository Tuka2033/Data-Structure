#include"DoublyCircular.h"
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
	tail->next = head;
	head->prev = tail;
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
	tail->next = head;
	head->prev = tail;
}
void Doublylinklist::AddMid(int val, int pos)
{
	node* temp;
	node* newnode = new node(val);
	temp = head;
	for (int i = 0; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
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
	tail->next = head;
	head->prev = tail;
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
		tail->next = head;
	}
}
void Doublylinklist::DelMid(int pos)
{
	node* temp;
	node* ptr;
	temp = head;
	ptr = head;
	for (int i = 1; i < pos - 1; i++)
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
		tail->next = head;
		head->prev = tail;
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
	if (head == NULL)
	{
		cout << "\nList is empty......!!!!!!!!!!!!\n";
	}
	else
	{
		temp = head;
		while (temp->next != head)
		{
			cout << temp->data << ends;
			temp = temp->next;
		}
		cout << temp->data << ends;
		cout << endl;
	}
}
void Doublylinklist::ReversedDisplay()
{
	node* temp;
	if (head == NULL)
	{
		cout << "\nList is empty......!!!!!!!!!!!!\n";
	}
	else
	{
		temp = tail;
		while (temp->prev != tail)
		{
			cout << temp->data << ends;
			temp = temp->prev;
		}
		cout << temp->data << ends;
		cout << endl;
	}
}