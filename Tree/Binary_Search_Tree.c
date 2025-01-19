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
    if(root != NULL){
        inorderTraversal(root->left);
        printf("\t%d",root->data);
        inorderTraversal(root->right);
    }
}

struct node *findMin(struct node *root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

struct node *deleteNode(struct node *root,int data){
    if(root == NULL){
        return root;
    }
    if(data<root->data){
        root->left = deleteNode(root->left,data);
    }
    else if(data>root->data){
        root->right = deleteNode(root->right,data);
    }
    else{
        //node with only one child 
        if(root->left == NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        //node with two children : replace the root with its inorder successor(smallest node in its right subtree)
        struct node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
    }
    return root;
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
                printf("\n Inorder Traversal ------\n");
                inorderTraversal(root);
                break;
            case 3:
                printf("\n Enter the data element to delete:");
                scanf("%d",&data);
                root = deleteNode(root,data);
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