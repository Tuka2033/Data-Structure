#include"Node.cpp"
template<class T>
class clinkList
{
	node<T>* head;
	int cnt;
public:
	clinkList();
	node<T>* createNode(T);
	void addBegin(T);
	void addMid(T,int);
	void addEnd(T);
	void deletefirst();
	void deleteMid(int);
	void deletelast();
	void Display();
};
