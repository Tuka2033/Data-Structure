#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class stack
{
	int size;
	int top;
	char** string;
public:
	stack();
	void push(char*);
	void display();
	char* pop();
};
stack::stack()
{
	cout << "\nEnter the size of stack\n";
	cin >> size;
	string = new char* [size];
	for (int i = 0; i < size; i++)
	{
		string[i] = new char[20];
	}
	top = -1;
}
void stack::push(char* ele)
{
	if (size - 1 == top)
	{
		cout << "\nStack is full\n";
	}
	else
	{
		top++;
		strcpy(string[top], ele);
	}
}
void stack::display()
{
	for (int i = top; i >= 0; i--)
	{
		cout << string[i] << endl;
	}
}
char* stack::pop()
{
	char* ele;
	if (top == -1)
	{
		cout << "\nStack is empty\n";
		return NULL;
	}
	else
	{
		ele = string[top--];
		return ele;
	}
}

int main()
{
	stack s;
	char ele[20];
	int ch;
	do
	{
		cout << "\n1.push\n2.pop\n3.display\n4.exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\nEnter string:\n";
			cin >> ele;
			s.push(ele);
			break;
		case 2:
			char* ele1;
			ele1 = s.pop();
			cout << "\ndeleted string: " << ele1;
			break;
		case 3:
			s.display();
			break;
		case 4:
			exit(0);
		}
	} while (ch != 0);
}