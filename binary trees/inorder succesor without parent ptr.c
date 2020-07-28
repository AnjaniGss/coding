#include <stdio.h> 
#include <stdlib.h> 

struct node { 
    int data; 
    struct node* left; 
    struct node* right; 
    struct node* parent; 
}; 
  
struct node* minValue(struct node* node) 
{ 
    struct node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) { 
        current = current->left; 
    } 
    return current; 
} 
  
struct node* inOrderSuccessor( 
    struct node* root, 
    struct node* n) 
{ 
  
    if (n->right != NULL) 
        return minValue(n->right); 
  
    struct node* succ = NULL; 
  
    
    while (root != NULL) { 
        if (n->data < root->data) { 
            succ = root; 
            root = root->left; 
        } 
        else if (n->data > root->data) 
            root = root->right; 
        else
            break; 
    } 
  
    return succ; 
} 


struct node* newNode(int data) 
{ 
    struct node* node = (struct node*) 
        malloc(sizeof( 
            struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    node->parent = NULL; 
  
    return (node); 
} 
  

struct node* insert(struct node* node, 
                    int data) 
{ 
    /* 1. If the tree is empty, return a new, 
      single node */
    if (node == NULL) 
        return (newNode(data)); 
    else { 
        struct node* temp; 
  
        /* 2. Otherwise, recur down the tree */
        if (data <= node->data) { 
            temp = insert(node->left, data); 
            node->left = temp; 
            temp->parent = node; 
        } 
        else { 
            temp = insert(node->right, data); 
            node->right = temp; 
            temp->parent = node; 
        } 
  
        /* return the (unchanged) node pointer */
        return node; 
    } 
} 
  
/* Driver program to test above functions*/
int main() 
{ 
    struct node *root = NULL, *temp, *succ, *min; 
  
    // creating the tree given in the above diagram 
    root = insert(root, 20); 
    root = insert(root, 8); 
    root = insert(root, 22); 
    root = insert(root, 4); 
    root = insert(root, 12); 
    root = insert(root, 10); 
    root = insert(root, 14); 
    temp = root->left->right->right; 
  
    succ = inOrderSuccessor(root, temp); 
    if (succ != NULL) 
        printf( 
            "\n Inorder Successor of %d is %d ", 
            temp->data, succ->data); 
    else
        printf("\n Inorder Successor doesn't exit"); 
  
    getchar(); 
    return 0; 
} 
 
