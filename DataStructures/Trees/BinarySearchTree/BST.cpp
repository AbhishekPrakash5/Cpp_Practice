#include <iostream>

using namespace std;

struct BstNode
{
	int data;
	BstNode *left,*right;
};

BstNode* newNode(int data)
{
	BstNode *temp = new BstNode();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

BstNode* Insert(BstNode *root, int data)
{
	if(root == NULL)
	{
		root = newNode(data);
	}
	else if(data <= root->data) 
	{
		root->left = Insert(root->left,data);
	}
	else 
	{
		root->right = Insert(root->right,data);
	}
	return root;
}
void Inorder(BstNode *root)
{
	if(root == NULL) 
		return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
bool Search(BstNode *root, int value)
{
	if(root == NULL) 
		return false;
	else if(root->data == value) 
		return true;
	else if(value <= root->data) 
		return Search(root->left,value);
	else 
		return Search(root->right,value);
}
void Minimum(BstNode* root)
{
	while(root->left != NULL)
		root = root->left;
	cout<<"MINIMUM is : "<<root->data<<endl;
}

int main()
{
	BstNode *root = NULL;
/*	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,5);
	root = Insert(root,7);
	root = Insert(root,30);
	Inorder(root);
	if(Search(root,20))
		cout<<"Found\n";
	else
		cout<<"Not Found\n";*/
		int n,x;
		cout<<"Enter number of elements : ";
		cin>>n;
		cout<<"Enter Element : \n";
		while(n--)
		{
			cin>>x;
			root = Insert(root,x);	
		}
		Inorder(root);cout<<endl;
		Minimum(root);
	return 0;
}
