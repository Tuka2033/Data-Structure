#include"linkList.h"
int main()
{
cLinkList s;
	int opt;
	int pos;
	int data1;
	int key;
	while (1)
	{
		cout << "\n1.create list\n2.insert\n3.delete_ele\n4.updatenode\n5.display\n6.Reverse\n7.search\n8.sort\n0.exit" << endl;
		cout << "Enter ur choice<0-exit>" << endl;
		cin >> opt;
		switch (opt)
		{
		case 0:
			exit(0);
		case 1:
			cout << "Enter data<creat list>" << endl;
			cin >> data1;
			s.creat_list(data1);
			break;
		case 2:
			/*int ch;
			cout << "\n 1.Add beg.\n2.Add Specified position.\n3.Add last.\n";
			cout << "\nEnter ur choice::";
			cin >> ch;
			switch (ch)
			{
			case 1:
				cout << "Enter data  :\n";
				cin >> data1;
				s.add_beg(data1);
				break;
			case 2:
				cout << "Enter data  :\n";
				cin >> data1;
				cout << "Enter position of element:\n";
				cin >> pos;

			}*/
			cout << "Enter data  :\n";
			cin >> data1;
			cout << "Enter position of element:\n";
			cin >> pos;
			s.insert(data1, pos);
			break;
		case 3:
			cout << "Enter a delete position:\n";
			cin >> pos;
			s.delete_ele(pos);
			break;
		case 4:
			cout << "Enter update element:" << endl;
			cin >> data1;
			break;
		case 5:
			s.display();
			break;
		case 6:
			s.reverse();
			break;
		case 7:
			cout << "Enter Search Key:-";
			cin >> key;
			s.search(key);
			break;
		case 8:
			s.sort();
			break;
		}
	}
}