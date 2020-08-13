#include"BinarySearch.h"

bsTree::bsTree()
{

}
node* bsTree::CreateNode(int val)
{
	node* newnode = new node(val);
	return newnode;
}
void bsTree::CreateTree(int val)
{
	node* temp;
	node* newnode = CreateNode(val);
	temp = root;
	if (root == NULL)
	{
		root = newnode;
	}
	else
	{
		while (true)
		{
			if (temp->data > val)
			{
				if (temp->lLink == NULL)
				{
					temp->lLink = newnode;
					break;
				}
				else
				{
					temp = temp->lLink;
				}
			}
			else
			{
				if (temp->rLink == NULL)
				{
					temp->rLink = newnode;
					break;
				}
				else
				{
					temp = temp->rLink;
				}
			}
		}
	}
}
void bsTree::preorder(node* trav) 
{
	if (trav == NULL)
		return;
	cout << trav->data << ", ";
	preorder(trav->lLink);
	preorder(trav->rLink);
}

void bsTree::preorder()
{
	cout << "PRE: ";
	preorder(root);
	cout << endl;
}