#include"BinarySearch.h"
int main()
{
	bsTree b;
	b.CreateTree(50);
	b.CreateTree(20);
	b.CreateTree(10);
	b.CreateTree(5);
	b.CreateTree(25);
	b.CreateTree(30);
	b.CreateTree(70);
	b.CreateTree(90);
	b.CreateTree(60);
	b.preorder();
}