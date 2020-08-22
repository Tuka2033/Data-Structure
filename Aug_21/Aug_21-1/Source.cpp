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
		arr = NULL;
	}
	cDeque(int sz)
	{
		rear = -1;
		front = -1;
		size = sz;
		arr = new int[size];
	}
	void insertfront(int data)
	{
		if (front == 0 && rear == size - 1)
		{
			printf("\nDeque is full..\n");
			return;
		}
		if (front == -1)
		{
			front = rear = 0;
			arr[front] = data;
			return;
		}
		if (front == 0 && rear != size - 1)
		{
			for (int i = rear; i >= front; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[front] = data;
			rear++;
		}
		if (front != 0 && rear != size - 1)
		{
			front = front - 1;
			arr[front] = data;
		}
	}

	void insertrear(int data)
	{
		if (front == 0 && rear == size - 1)
		{
			printf("\nDeque is full\n");
			return;
		}
		if (front == -1)
		{
			front = rear = 0;
			arr[rear] = data;
			return;
		}
		if (rear == size - 1)
		{
			for (int i = front; i <= rear; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[rear] = data;
			front--;
		}
		else
		{
			rear++;
			arr[rear] = data;
		}
	}
	void deletefront()
	{
		int item;
		if (front == -1)
		{
			printf("\ndeque is empty..\n");
		}
		else
		{
			item = arr[front];
			printf("\ndeleted element is::", item);
			arr[front] = 0;
			if (front == rear)
			{
				front = rear = -1;
			}
			else
			{
				front++;
			}
		}
	}
	void deleterear()
	{
		int item;
		if (front == -1)
		{
			printf("\ndeque is empty..\n");
		}
		else
		{
			item = arr[rear];
			printf("\ndeleted element is::", item);
			arr[rear] = 0;
			if (front == rear)
			{
				front = rear = -1;
			}
			else
			{
				rear--;
			}
		}
	}
	void Display()
	{
		cout << "\nFront-->";
		if (front == -1)
		{
			printf("\ndeque is empty..\n");
			return;
		}
		for (int i = front; i <= rear; i++)
		{
	    	cout << arr[i] << " ";
		}
	}
};
int main()
{
	cDeque d(6);
	int choice, ele;
	do
	{
		printf("\n1.Insert front\n");
		printf("2.Insert rear\n");
		printf("3.delete front\n");
		printf("4.delete rear\n");
		printf("5.exit\n");
		cout<<"Enter ur choice::";
		cin>>choice;
		switch (choice)
		{
		case 1:
			cout<<"\nEnter an element to be insert ::";
			cin >> ele;
			d.insertfront(ele);
			d.Display();
			break;
		case 2:
			cout << "\nEnter an element to be insert ::";
			cin >> ele;
			d.insertrear(ele);
			d.Display();
			break;
		case 3:
			d.deletefront();
			d.Display();
			break;
		case 4:
			d.deleterear();
			d.Display();
			break;
		}
	} while (choice != 5);
	return 0;
}