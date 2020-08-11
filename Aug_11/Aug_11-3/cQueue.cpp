#include"cQueue.h"
cQueue::cQueue()
{
	rear = front = NULL;
}
node* cQueue::createNode(int val)
{
	node* newnode = new node(val);
	return newnode;
}
void cQueue::Enqueue(int val)
{
	node* newnode = createNode(val);
	if(front == NULL)
	{
		front = newnode;
		rear=front;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
	}
	cout << "\n-->Front::" << front;
	cout << "\n-->rear::" << rear;
	cout << endl;
}
void cQueue::Dequeue()
{
	node* temp;
	if (front == NULL)
	{
		cout << "\nQueue is Empty...!!!!!!\n";
		rear = NULL;
	}
	else
	{
		temp = front;
		front = front->next;
		delete temp;
	}
	cout << "\n-->FRONT::" << front;
	cout << "\n-->REAR::" << rear;
	cout << endl;
}
void cQueue::Display()
{
	node* temp;
	if (front == NULL)
	{
		cout << "\nQueue is Empty...!!!!!!\n";
	}
	else
	{
		temp = front;
		while (temp != NULL)
		{
			cout << "--->" << temp->data;
			temp = temp->next;
		}
		cout << endl;
	}
}