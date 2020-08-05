#include"Linkedlist.h"
int main()
{
	cLinkedlist l1, even, odd;
	int ch,data;
	do
	{
		cout << "\nEnter Data::";
		cin >> data;
		l1.creat_list(data);
		cout << "\nDo u want continue[0/1]::";
		cin >> ch;
	} while (ch != 0);
	l1.Display();
	l1.Split(l1, even, odd);
	cout << "\n\nEven Number Linked  List::";
	even.Display();
	cout << "\n\nOdd Number Linked  List::";
	odd.Display();
}