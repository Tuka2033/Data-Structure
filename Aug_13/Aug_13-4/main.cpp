#include"bTree.h"
int main()
{
	bTree b;
	char ele;
	for (int i = 0; i < 15; i++)
	{
		cout << "\nEnter inserting element::";
		cin >> ele;
		b.CreateTree(ele);
	}
	b.order();
}