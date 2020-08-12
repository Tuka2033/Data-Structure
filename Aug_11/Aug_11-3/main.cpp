#include"cQueue.h"
int main()
{
	cQueue q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);
	q.Display();
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();
	q.Display();
	q.Dequeue();
	q.Dequeue();
	q.Display();
	q.Dequeue();
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);
}