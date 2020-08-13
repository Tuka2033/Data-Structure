#include"Node.h"
class bTree
{
	node* root;
public:
	bTree();
	node* createNode(int);
	void CreateTree(int);
	void preorder(node* temp);
	void postorder(node* temp);
	void Inorder(node* temp);
	void order();
};