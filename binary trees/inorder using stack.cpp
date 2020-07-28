#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node* newnode(int data){
	struct Node *nnode = (struct Node*)malloc(sizeof(struct Node));
	nnode->data=data;
	nnode->left=NULL;
	nnode->right=NULL;
	return nnode;
}

void intra(struct Node* node)
{
	struct Node* current;
	current=node;
	stack<Node*> s;
	while(current!=NULL||s.empty()==false){
		while(current){
			s.push(current);
			current=current->left;
		}
		current=s.top();
		cout<<current->data<<" , ";
		s.pop();
		current=current->right;
	}
}
int main(){
	struct Node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	intra(root);
	return 0;	
}
