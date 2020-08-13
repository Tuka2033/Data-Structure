#include"Node.h"
class bsTree
{
	node* root;
public:
	bsTree();
	node* CreateNode(int);
	void CreateTree(int);
	void preorder(node*);
	void preorder();
};
