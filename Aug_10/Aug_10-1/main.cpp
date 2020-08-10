#include"Linklist.h"
#include"Book.h"
int main()
{
	cBook b;
	cStack s;
	int ch;
	do
	{
		cout << "\n1.PUSH.\n2.POP.\n3.Display\n0.Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\nEnter Book Details::";
			cin >> b;
			s.Push(b);
			break;
		case 2:
			s.POP();
			break;
		case 3:
			s.Display();
			break;
		case 0:
			exit(0);
			break;
		default:
			cout << "\n Invalid Choice....\n";
			break;
		}
	} while (ch != 0);
}