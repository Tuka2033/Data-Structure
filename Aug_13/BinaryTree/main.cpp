#include"Btree.h"
int main()
{
	bTree b;
	b.CreateTree(50);
	b.CreateTree(20);
	b.CreateTree(60);
	b.CreateTree(55);
	b.CreateTree(70);
	b.CreateTree(30);
	b.CreateTree(25);
	b.CreateTree(10);
	b.order();
}