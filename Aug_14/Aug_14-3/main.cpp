#include"BSTree.h"
int main()
{
	bsTree b;
	b.createTree(50);
	b.createTree(60);
	b.createTree(55);
	b.createTree(70);
	b.createTree(65);
	b.createTree(45);
	b.createTree(40);
	b.createTree(30);
	b.createTree(35);
	b.createTree(25);
	b.createTree(20);
	b.createTree(10);
	b.createTree(15);
	b.createTree(5);
	b.preorder();
	b.Inorder();
	b.postorder();
	int key;
	cout << "\n\nEnter Serch Key::";
	cin >> key;
	node* temp = b.binarySearch(key);
	if (temp == NULL)
	{
		cout << "\nKey not found...";
	}
	else
	{
		cout << "\nKey Found::" << temp->getdata();
	}
}