#include"Btree.h"
bTree::bTree()
{
	root = NULL;
}
node* bTree::createNode(int val)
{
	node* newnode = new node(val);
	return newnode;
}
void bTree::CreateTree(int val)
{
	node* newnode = createNode(val);
	node* temp;
	if (root == NULL)
	{
		root = newnode;
	}
	else
	{
		temp = root;
		while (true)
		{
			if (temp->data > val)
			{
				if (temp->left == NULL)
				{
					temp->left = newnode;
					break;
				}
				temp = temp->left;
			}
			else
			{
				if (temp->right == NULL)
				{
					temp->right = newnode;
					break;
				}
				temp = temp->right;
			}
		}
	}
}
void bTree::preorder(node* temp)
{
	if (temp != NULL)
	{
	  cout << temp->data << ends;
	  preorder(temp->left);
	  preorder(temp->right);
	}
	else
	{
		return;
	}
}
void bTree::postorder(node* temp)
{
	if (temp != NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		cout << temp->data << ends;
	}
	else
	{
		return;
	}
}
void bTree::Inorder(node* temp)
{
	if (temp != NULL)
	{
		Inorder(temp->left);
		cout << temp->data << ends;
		Inorder(temp->right);
		
	}
	else
	{
		return;
	}
}
void bTree::order()
{
	cout << "\nPREORDER::";
	preorder(root);
	cout << "\nPOSTORDER::";
	postorder(root);
	cout << "\nINORDER::";
	Inorder(root);
}