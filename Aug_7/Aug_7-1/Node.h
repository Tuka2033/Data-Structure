#include<iostream>
using namespace std;
template<class T>
class node
{
	T data;
	node* next;
public:
	node();
	node(T);
	void setData(T);
	void setNext(node*);
	T getData();
	node<T>* getNext();
	//friend class cStack;
};