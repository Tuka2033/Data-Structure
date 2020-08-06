#include"Node.h"
class CircularList
{
	node* head;
	int cnt;
public:
	CircularList();
	void CreateList(int);
	void AddBegin(int);
	void AddMid(int, int);
	void AddEnd(int);
	void DelBegin();
	void DelMid(int);
	void DelEnd();
	void Display();
};
