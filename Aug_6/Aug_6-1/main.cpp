#include"DoblyLinklist.h"
int main()
{
	Doublylinklist l1;
	l1.CreateList(10);
	l1.CreateList(20);
	l1.CreateList(30);
	l1.CreateList(40);
	l1.CreateList(50);
	l1.CreateList(60);
	l1.ForwardDisplay();
	l1.ReversedDisplay();
	l1.AddBegin(8);
	l1.AddBegin(5);
	l1.AddBegin(2);
	l1.ForwardDisplay();
	l1.ReversedDisplay();
	l1.AddEnd(62);
	l1.AddEnd(65);
	l1.AddEnd(68);
	l1.AddEnd(70);
	l1.ReversedDisplay();
	l1.ForwardDisplay();
	l1.AddMid(12, 4);
	l1.AddMid(22, 6);
	l1.AddMid(32, 8);
	l1.ForwardDisplay();
	l1.DelMid(4);
	l1.ForwardDisplay();
	l1.DelMid(6);
	l1.ForwardDisplay();
	l1.DelMid(8);
	l1.ForwardDisplay();
	l1.ReversedDisplay();
	cout << "\n\n\n\n";
	l1.DelEnd();
	l1.DelEnd();
	l1.DelEnd();
	l1.ReversedDisplay();
	l1.DelBegin();
	l1.DelBegin();
	l1.DelBegin();
	l1.ReversedDisplay();
	l1.sort();
	l1.ReversedDisplay();
}