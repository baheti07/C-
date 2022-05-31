#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*left,*right;
};
struct node*lca(node*root,int n1,int n2)
{
    if (root == NULL) return NULL;
 
    // If either n1 or n2 matches with root's key, report
    // the presence by returning root (Note that if a key is
    // ancestor of other, then the ancestor key becomes LCA
    if (root->data == n1 || root->data == n2)
        return root;
    node*left=lca(root->left,n1,n2);
    node*right=lca(root->right,n1,n2);
    if(left==NULL) return right;
    else if(right==NULL) return left;
    else return root;
}
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root->left->right->right=newNode(88);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  cout << "LCA(4, 88) = " << lca(root, 4, 88)->data;
} 