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

node* bsTree::binsearch(int key, node** pparent) {
	node* trav = root;
	*pparent = NULL;
	while (trav != NULL) {
		if (key == trav->data)
			return trav;
		*pparent = trav;
		if (key < trav->data)
			trav = trav->left;
		else
			trav = trav->right;
	}
	*pparent = NULL;
	return NULL;
}

void bsTree::del(int val) {
	node* temp, * parent, * pred;
	// find the node with its parent
	temp = binsearch(val, &parent);
	// if node is not found, return.
	if (temp == NULL)
		return;
	// if node has both child
	if (temp->left != NULL && temp->right != NULL) {
		// find its pred with pred's parent
		parent = temp;
		pred = temp->left;
		while (pred->right != NULL) {
			parent = pred;
			pred = pred->right;
		}
		// replace temp's data with pred's data
		temp->data = pred->data;
		// consider pred node to be deleted
		temp = pred;
	}
	// if node do not have right child
	if (temp->right == NULL) {
		if (temp == root)
			root = temp->left;
		else if (temp == parent->left)
			parent->left = temp->left;
		else
			parent->right = temp->left;
		delete temp;
	}
	// if node do not have left child
	else if (temp->left == NULL) {
		if (temp == root)
			root = temp->right;
		else if (temp == parent->left)
			parent->left = temp->right;
		else
			parent->right = temp->right;
		delete temp;
	}
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