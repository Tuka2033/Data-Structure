#include<iostream>
using namespace std;
class cDeque
{
	int rear, front;
	int size;
	int* arr;
public:
	cDeque()
	{
		rear = -1;
		front = -1;
		size = 0;
	}
	cDeque(int sz)
	{
		size = sz;
		arr = new int[size];
	}
	void InsertFront(int data)
	{
		if ((front == 0) && (rear = size - 1))
		{
			cout << "\nDequeue is full.....!!!!!!!!";
		}
		else if (front == -1)
		{
			front = rear = 0;
			arr[rear] = data;
		}
		else if ((rear != size - 1) && (front == 0))
		{
			for (int i = rear; i >= front; i++)
			{
				arr[i + 1] = arr[i];
			}
			arr[front] = data;
			rear++;
		}
		else if ((front != 0) && (rear != size - 1))
		{
			front--;
			arr[front] = data;
        }
	}

	void InsertRear(int data)
	{
		if ((rear == size) && (front == 0))
		{
			cout << "\nDeque is full....!!!!!";
		}
		else if (front == -1)
		{
			rear = front = 0;
			arr[rear] = data;
		}
		else if ((front == 0) && (rear <= size-1))
		{
			arr[rear] = data;
			rear++;
		}
		else if ((front > 0) && (rear == size-1))
		{
			for (int i = front; i <= rear; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[rear] = data;
			front--;
			rear++;
		}
	}
	void deleteFront()
	{
		if (front == -1)
		{
			cout << "\nDequeue is empty....!!!";
		}
		else if(front!=rear)
		{
			int ele = arr[front];
			cout << "\nDeleted Element is::"<<ele;
			front++;
		}
		else if (rear == front)
		{
			int ele = arr[front];
			cout << "\nDeleted Element is::" << ele;
			front=rear=-1;
		}
	}
	void deleteRear()
	{
		if (front == -1)
		{
			cout << "\nDequeue is empty....!!!";
		}
		else if (rear == front)
		{
			int ele = arr[rear];
			cout << "\nDeleted Element is::" << ele;
			front = rear = -1;
		}
		else
		{
			int ele = arr[rear];
			cout << "\nDeleted Element is::" << ele;
			rear--;
		}
	}
	void Display()
	{
		cout << "\nFront-->";
		for (int i = front; i < rear; i++)
		{
			cout << arr[i]<<" ";
		}
	}
};
int main()
{
	cDeque d(9);
	//
	d.InsertRear(10);
	d.InsertRear(20);
	d.InsertRear(30);
	d.InsertRear(40);
	d.InsertRear(50);
	d.InsertRear(60);
	d.InsertRear(70);
	d.InsertRear(80);
	d.InsertRear(90);
	d.Display();
	d.deleteFront();
	d.Display();
	d.InsertFront(100);
	d.Display();
	d.deleteFront();
	d.Display();
	d.InsertRear(110);
	d.InsertRear(120);
	d.deleteRear();
	d.Display();
}