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
    if(root==NULL){
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
    if(root != NULL){
        inorderTraversal(root->left);
        printf("\t%d",root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct node *root){
    if(root!=NULL){
        printf("\t%d",root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct node *root){
    if(root!=NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("\t%d",root->data);
    }
}

int main(){
    struct node *root = NULL;
    int choice,data;
    printf("\n Binary Tree Traversal.");
    printf("\n 1.Insert a node.");
    printf("\n 2.Inorder Traversal.");
    printf("\n 3.Preorder Traversal.");
    printf("\n 4.Postorder Traversal.");
    printf("\n 5.Exit");
    while(1){
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n Enter the element to insert in the node:");
                scanf("%d",&data);
                root = insertNode(root,data);
                break;
            case 2:
                inorderTraversal(root);
                break;
            case 3:
                preorderTraversal(root);
                break;
            case 4:
                postorderTraversal(root);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\n Invalid choice! please try again !");     
        }
    }
    return 0;
}