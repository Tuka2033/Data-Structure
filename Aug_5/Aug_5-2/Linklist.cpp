#include"Linkedlist.h"

cLinkedlist::cLinkedlist()
{
	head = NULL;
}
void cLinkedlist::creat_list(int data1)
{
	node* temp;
	node* newnode = new node();
	newnode->data = data1;
	if (head == 0)
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
void cLinkedlist::Split(cLinkedlist &l, cLinkedlist &ev, cLinkedlist &on)
{
    node* temp = l.head;
    if (head != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data % 2 == 0)
            {
                ev.creat_list(temp->data);

            }
            else
                on.creat_list(temp->data);
            temp = temp->next;
        }
    }
}

void cLinkedlist::Display()
{
    node* temp = head;
    if (head != NULL)
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout << endl;
}