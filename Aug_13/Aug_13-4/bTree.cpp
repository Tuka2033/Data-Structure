#include"bTree.h"
bTree::bTree()
{
	root = NULL;
	ch =0;
}
node* bTree::createNode(char val)
{
	node* newnode = new node(val);
	return newnode;
}
void bTree::CreateTree(char val)
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
			cout << "\nWhich do u want insert RIGHT Or LEFT (R/L)::";
			cin >> ch;
			if (ch=='L'||ch=='l')
			{
				if (temp->left == NULL)
				{
					temp->left = newnode;
					break;
				}
				temp = temp->left;
			}
			else if(ch=='R'||ch=='r')
			{
				if (temp->right == NULL)
				{
					temp->right = newnode;
					break;
				}
				temp = temp->right;
			}
			else
			{
				cout << "\nplease enter valid choice....R->right & L->Left\n";
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