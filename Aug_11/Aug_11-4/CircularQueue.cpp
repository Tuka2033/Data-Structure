#include<iostream>
using namespace std;
class cQueue
{
	int front, rear,size;
	int* arr;
public:
	cQueue()
	{
		size = 5;
		front = rear = -1;
		arr = new int[size];
	}
	void enqueue(int val)
	{
		if ((front ==0)&&(rear==size-1)||(front==rear+1))
		{
			cout << "\nQueue is Full......!!!!!!!!!!\n";
		}
		else
		{
			if (front == -1)
			{
				front = 0;
				rear = 0;
			}
			else if (rear == size - 1)
			{
				rear = 0;
			}
			else
			{
				rear = rear + 1;
			}
			arr[rear] = val;
		}
	}
	void dequeue()
	{
		int ele;
		if (front == -1)
		{
			cout << "\nDequeue is Empty........!!!!!!!!!!!!!!!\n";
		}
		else
		{
			ele = arr[front];
			cout << "\nDeleted element is:" << ele<<endl;
			if (front == rear)
			{
				front = -1;
				rear = -1;
			}
			else
			{
				if (front == size - 1)
				{
					front = 0;
				}
				else
				{
					front = front + 1;
				}
			}
		}
	}
	void display()
	{

	int i;
		if (front <= rear)
		{
			for (i = front; i <= rear; i++)
			{
				cout << arr[i] << "  ";
			}
		}
		else if (front > rear)
		{
			for (i = front; i <= size - 1; i++)
			{
				cout << arr[i] << "  ";
			}
			for (i = 0; i <= rear; i++)
			{
				cout << arr[i] << "  ";
			}
		}
	}
	
};
int main()
{
	cQueue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	q.display();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.enqueue(400);
	q.enqueue(500);
	q.enqueue(600);
	q.display();
	q.dequeue();
	q.display();
}