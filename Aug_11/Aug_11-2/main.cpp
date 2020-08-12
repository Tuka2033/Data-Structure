#include"cQueue.h"
int main()
{
	cQueue q;
	q.enqueue();
	q.enqueue();
	q.enqueue();
	q.enqueue();
	q.enqueue();
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
}