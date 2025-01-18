#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = data;
    return newnode;
}

struct node *insertNode(struct node *root,int data){
    if(root == NULL){
        root = createNode(data);
        return root;
    }
    else if(data<root->data){
        root->left = insertNode(root->left,data);
    }
    else if(data>root->data){
        root->right = insertNode(root->right,data);
    }
    return root;
}

void inorderTraversal(struct node *root){
    if(root == NULL){
        return 0;
    }
    inordertraversal(root->left);
    printf("\t%d",root->data);
    inorderTraversal(root->right);
}

int main(){
    struct node *root = NULL;
    int choice,data;
    while(1){
        printf("\n Binary Tree Operations :\n");
        printf("\n 1.Insert a node.");
        printf("\n 2.Inorder Traversal.");
        printf("\n 3.Preorder Traversal.");
        printf("\n 4.Postorder Traversal.");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n Enter data to insert:");
                scanf("%d",&data);
                root = insertNode(root,data);
                break;
        }
    }
}