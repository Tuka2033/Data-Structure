#include"bTree.h"
int main()
{
	bTree b;
	int ele;
	for (int i = 0; i < 15; i++)
	{
		cout << "\nEnter inserting element::";
		cin >> ele;
		b.CreateTree(ele);
	}
	b.order();
}