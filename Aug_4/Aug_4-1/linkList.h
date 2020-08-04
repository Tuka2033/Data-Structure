#include"Node.h"
class cLinkList
{
	node* head;
	node* temp;
	int cnt;
public:
	cLinkList();
	cLinkList(node* n);
	void creat_list(int);
	void add_beg(int);
	void add_mid(int, int);
	void add_end(int);
	void insert(int, int);
	void delete_beg();
	void delete_mid(int);
	void delete_end();
	void delete_ele(int);
	void sort();
	void search(int);
	void reverse();
	void display();
};
