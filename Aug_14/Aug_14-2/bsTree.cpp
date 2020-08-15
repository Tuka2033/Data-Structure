#include"bsTree.h"
bsTree::bsTree()
{
	root = NULL;
}

//recursive function to create function
void bsTree::createTree(node* trev,int data)
{
	if (trev->data > data)
	{
		if (trev->left == NULL)
		{
			trev->left = new node(data);
			return;
		}
		createTree(trev->left, data);
	}
	else
	{
		if (trev->right == NULL)
		{
			trev->right = new node(data);
			return;
		}
		createTree(trev->right, data);
	}
}

//wrapper function to call recursive function
void bsTree::createTree(int val)
{
	if(root==NULL)
	{
	root = new node(val);
	}
	else
	 createTree(root,val);
}

//wrapper function to call recursive function
void bsTree::order()
{
	cout << "\n\nPRE::";
	preorder(root);
	cout << "\n\nPost::";
	postorder(root);
	cout << "\n\nIn::";
	Inorder(root);

}

//recursive function preorder
void bsTree::preorder(node* trev)
{
	if (trev == NULL)
	{
		return;
     }
	preorder(trev->left);
	preorder(trev->right);
	cout << trev->data << ends;
}

//recursive function postorder
void bsTree::postorder(node* trev)
{
	if (trev == NULL)
	{
		return;
	}
	postorder(trev->left);
	postorder(trev->right);
	cout << trev->data << ends;	
}

//recursive function Inorder
void bsTree::Inorder(node* trev)
{
	if (trev == NULL)
	{
		return;
	}
	Inorder(trev->left);
	cout << trev->data << ends;
	Inorder(trev->right);
}

//recursive function search
node* bsTree::binarySearch( node* trev,int key)
{
	if (trev == NULL)
	{
		return NULL;
	}
	if (trev->data == key)
	{
		return trev;
	}
    if (trev->data > key)
	{
	  return binarySearch(trev->left, key);
	}
	else
	{
	return binarySearch(trev->right, key);
	}
}

//wrapper function to allsearch function
node* bsTree:: binarysearch(int val)
{
	return binarySearch(root, val);
}