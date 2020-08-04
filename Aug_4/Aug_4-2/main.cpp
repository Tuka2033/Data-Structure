#include"Linklist.h"
int main()
{
	clinkList s;
	int opt;
	int pos;
	cEmployee e1;
	int key;
	while(1)
	{
		cout << "\n1.create list\n2.insert\n3.delete_ele\n4.display\n6.Reverse\n7.search\n8.sort\n0.exit" << endl;
		cout << "Enter ur choice<0-exit>" << endl;
		cin >> opt;
		switch (opt)
		{
		case 0:
			exit(0);
		case 1:
			cout << "Enter data<creat list>" << endl;
			//e1.Accept() ;
			cin >> e1;
			s.creat_list(e1);
			break;
		case 2:
			cout << "Enter data  :\n";
			// e1.Accept();
			cin >> e1;
			cout << "Enter position of element:\n";
			cin >> pos;
			s.insert(e1, pos);
			break;
		case 3:
			cout << "Enter a delete position:\n";
			cin >> pos;
			s.delete_ele(pos);
			break;
		case 4:
			s.display();
			break;
		/*case 5:
			s.reverse();
			break;
		case 6:
			cout << "Enter Search Key:-";
			cin >> key;
			s.search(key);
			break;
		case 7:
			s.sort();
			break;*/
		}
	}
}