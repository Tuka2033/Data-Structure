#include"cQueue.h"
cQueue::cQueue()
{
	size = 5;
	arr = new cEmp[size];
	front = rear = -1;
}
cQueue::cQueue(int sz)
{
	size = sz;
	arr = new cEmp[size];
}
void cQueue::enqueue()
{
	if (front == -1)
	{
		front++;
	}
	if (rear == size - 1)
	{
		cout << "\nQueue is full....!!!";
	}
	else
	{
		cEmp e;
		cout << "\nEnter Employee details::";
		cin >> e;
		arr[++rear] = e;
	}
	cout << "\n\nfront::" << front;
	cout << "\nrear::" << rear << endl;
}
void cQueue::dequeue()
{
	if (front == -1)
	{
		cout << "\nQueue is empty....!!!!!!!!!!!!";
	}
	else
	{
		cEmp ele = arr[front];
		if (front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front++;
		}
		cout << "\nDeleted Element is::" << ele<<endl;
	}
	cout << "\n\nFRONT::" << front;
	cout << "\nREAR::" << rear << endl;
}
void cQueue::display()
{
	if (front == -1)
	{
		cout << "\nQueue is empty....!!!!!!!!!!!!";
	}
	else
	{
		for (int i = front; i <= rear; i++)
		{
			cout << "-->" << arr[i];
			cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		
		cout << endl;
	}
}