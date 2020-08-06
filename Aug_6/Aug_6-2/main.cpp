#include"CircularSingly.h"
int main()
{
	CircularList l1;
	l1.CreateList(10);
	l1.CreateList(20);
	l1.CreateList(30);
	l1.CreateList(40);
	l1.CreateList(50);
	l1.Display();
	l1.AddBegin(5);
	l1.AddMid(15, 3);
	l1.AddEnd(55);
	l1.Display();
	l1.DelBegin();
	l1.DelMid(2);
	l1.DelEnd();
	l1.Display();
}