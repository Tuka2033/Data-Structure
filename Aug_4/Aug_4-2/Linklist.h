#include"Node.h"
class clinkList
{
	Node* head;
	Node* temp;
	int cnt;
public:
	clinkList();
	//clinkList(cEmployee*);
	void creat_list(cEmployee);
	void add_beg(cEmployee);
	void add_mid(cEmployee, int);
	void add_end(cEmployee);
	void insert(cEmployee, int);
	void delete_beg();
	void delete_mid(int);
	void delete_end();
	void delete_ele(int);
	void sort();
	void display();
	/*void search(int);
	void reverse();*/
	
};
