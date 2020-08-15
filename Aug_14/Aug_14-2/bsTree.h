#include"Node.h"
//Creation of tree in recursive function
class bsTree
{
	node* root;
public:
	bsTree();
	void createTree(node*,int);
	void createTree(int);
	void order();
	void preorder(node*);
	void postorder(node*);
	void Inorder(node*);
	node* binarySearch(node*,int);
	node* binarysearch(int);
};