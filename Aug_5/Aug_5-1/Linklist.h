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
	void reverse();
	friend ostream& operator<<(ostream& out, clinkList& l)
	{
		node<T>* temp;
		temp =l.head;
		while (temp != NULL)
		{
			out << "[" << temp->getData() << "]-->";
			temp = temp->getNext();
		}
		return out;
	}
	~clinkList();
};
