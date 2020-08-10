#include"Linklist.h"
cStack::cStack()
{
	head = NULL;
}
node* cStack::CreateNode(cBook e)
{
	node* newnode = new node(e);
	return newnode;
}
void cStack::Push(cBook e)
{
	node* newnode = CreateNode(e);
	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		newnode->next = head;
		head = newnode;
	}
}
void cStack::POP()
{
	node* temp;
	if (head == NULL)
	{
		cout<<"\nStack is Empty......\n";
	}
	else
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}
void cStack::Display()
{
	node* temp;
	temp = head;
	if (head == NULL)
	{
		cout << "\nStack is Empty......\n";
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->b;
			temp = temp->next;
		}
	}
}