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

int checktrees(struct node* t1, struct node* t2){
	if(t1==NULL && t2==NULL)
		return 1;
	if(t1!=NULL && t2!=NULL){
		return ((t1->data==t2->data)&&(checktrees(t1->left,t2->left))&&(checktrees(t1->right,t2->right)));
	}
	return 0;
}

int main(){
	struct node* t1=newnode(1);
	t1->left=newnode(2);
	t1->right=newnode(3);
	t1->left->left=newnode(4);
	t1->left->right=newnode(5);
	
    struct node* t2=newnode(1);
	t2->left=newnode(2);
	t2->right=newnode(3);
	t2->left->left=newnode(4);
	t2->left->right=newnode(6);
	if(checktrees(t1,t2)){
		cout<<"identical";
	}
	else
		cout<<"not identical";
	return 0;	
}
