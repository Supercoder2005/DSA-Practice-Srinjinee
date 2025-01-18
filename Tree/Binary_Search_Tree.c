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
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return root;
}

struct node *insertNode(struct node *root,int data){
    if(root == NULL){
        createNode(data);
    }
    else if(data<root->data){
        insertNode(root->left,data);
    }
    else if(data>root->data){
        insertNode(root->right,data);
    }
    return root;
}

void inorderTraversal(){
    if(root != NULL){
        inorderTraversal(root->left);
        printf("\t%d",root->data);
        inorderTraversal(root->right);
    }
}

int main(){
    struct node *root = NULL;
    int choice,data;
    while(1){
        printf("\n Binary search Tree Operations-------\n");
        printf("\n 1.Insert a node.");
        printf("\n 2.Inorder Traversal.");
        printf("\n 3.Delete a node.");
        printf("\n 4.Exit.");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n Enter data to insert:");
                scanf("%d",&data);
                root = insertNode(root,data);
                break;
            case 2:
                inorderTraversal(root);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n Invalid choice!");
                break;
        }
    }
}