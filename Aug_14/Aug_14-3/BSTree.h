#include"Node.h"
#include<stack>
class bsTree
{
	node* root;

public:
	bsTree();
	void createTree(int);
	void preorder();
	void postorder();
	void Inorder();
	node* binarySearch(int);
	void delAll(node*);
	void delAll();
	~bsTree();
};
