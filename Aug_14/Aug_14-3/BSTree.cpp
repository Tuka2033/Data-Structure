#include"BSTree.h"
bsTree::bsTree()
{
	root = NULL;

}

//Non recursive Create tree
void bsTree::createTree(int val)
{
	node* newnode = new node(val);
	node* trev;
	if (root == NULL)
	{
		root = newnode;
	}
	else
	{
		trev = root;
		while (1)
		{
			if (trev->data > val)
			{
				if (trev->left == NULL)
				{
					trev->left = newnode;
					break;
				}
				trev = trev->left;
			}
			else
			{
				if (trev->right == NULL)
				{
					trev->right = newnode;
					break;
				}
				trev = trev->right;
			}
		}
	}
}

//non recursive pre
void bsTree::preorder()
{
	stack<node*>s;
	node* trev = root;
	cout << "\nPRE::";
	if (trev == NULL)
		return;
	while (trev != NULL || !s.empty())
	{
		while (trev != NULL)
		{
			cout << trev->data << ends;
			if (trev->right != NULL)
				s.push(trev->right);
			trev = trev->left;
		}
		if (!s.empty())
		{
			trev = s.top();
			s.pop();
		}
	}
}

//non recursive In
void bsTree::Inorder()
{
	stack<node*> s;
	node* trev = root;
	cout << "\nIN::";
	if (trev == NULL)
	{
		return;
	}
	while (trev != NULL || !s.empty())
	{
		while (trev != NULL)
		{
			s.push(trev);
			trev = trev->left;
		}
		if (!s.empty())
		{
			trev = s.top(); s.pop();
			cout << trev->data << ends;
			trev = trev->right;
		}
	}

}
//non recursive post
void bsTree::postorder()
{
	stack<node*> s;
	node* trev = root;
	cout << "\nPOST::";
	if (trev == NULL)
	{
		return;
	}
	while (trev != NULL || !s.empty())
	{
		while (trev != NULL)
		{
			s.push(trev);
			trev = trev->left;
		}
		if (!s.empty()) {
			trev = s.top();	s.pop();
			if (trev->right == NULL || trev->right->visited == true) {
				cout << trev->data << ends;
				trev->visited = true;
				trev = NULL;
			}
			else {
				s.push(trev);
				trev = trev->right;
			}
		}
	}
}
//non recursive search
node* bsTree::binarySearch(int key)
{
	node* trev = root;
	while (trev != NULL)
	{
		if (trev->data == key)
		{
			return trev;
		}
		if (trev->data > key)
		{
			trev = trev->left;
		}
		else
		{
			trev = trev->right;
		}
	}
	return NULL;
}

//delete All Node (recursive)
void bsTree::delAll(node* trev)
{
	if (trev == NULL)
	{
		return;
	}
	delAll(trev->left);
	delAll(trev->right);
	delete trev;
}

//wrapper function to call dalAll recursive function
void bsTree::delAll()
{
	delAll(root);
	root = NULL;
}
bsTree::~bsTree()
{
	delAll();
}