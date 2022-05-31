#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};

node* insertBST(node *root,int val)
{
	if(root==NULL)
	{
		return new node(val);
	}
	if(val<root->data)
	{
		root->left=insertBST(root->left,val);
	}
	else
	{
		root->right=insertBST(root->right,val);
	}
	return root;
}

node* kthlargest(node* root,int& k)
{
	if(root==NULL)
	return NULL;
	
	node* right=kthlargest(root->right,k);
	if(right!=NULL)
	return right;
	k--;
	
	if(k==0)
	return root;
	
	return kthlargest(root->left,k);
}

node* kthsmallest(node* root,int &k)
{
	if(root==NULL)
	return NULL;
	
	node* left=kthsmallest(root->left,k);
	if(left!=NULL)
	return left;
	k--;
	if(k==0)
	return root;
	
	return kthsmallest(root->right,k);
}

int main()
{
	
	
	
	int k=3;
	node* root=NULL;
	root = insertBST(root, 50);
    root = insertBST(root, 30);
    root = insertBST(root, 20);
    root = insertBST(root, 40);
    root = insertBST(root, 70);
    root = insertBST(root, 60);
    root = insertBST(root, 80);
	
	int p=k;
    cout<<"kth largest element is: "<<kthlargest(root,k)->data;
    k=p;cout<<endl;
    cout<<"kth smallest element is: "<<kthsmallest(root,k)->data;

}