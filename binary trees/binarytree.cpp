#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newnode(int data){
	struct node *nnode = (struct node*)malloc(sizeof(struct node));
	nnode->data=data;
	nnode->left=NULL;
	nnode->right=NULL;
	return nnode;
}
void intraverse(struct node* node){
	if(node)
	{
	intraverse(node->left);
	cout<<node->data<<" , ";
	intraverse(node->right);
   }
}
int main(){
	struct node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	intraverse(root);
	return 0;	
}
