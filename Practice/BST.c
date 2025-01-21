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

void inordertraversal(struct node *root){
    if(root != NULL){
        inordertraversal(root->left);
        printf("\t%d",root->data);
        inordertraversal(root->right);
    }
}

struct node *findMin(struct node *root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

struct node *deleteNode(struct node *root,int data){
    if(root==NULL){
        return root;
    }
    else if(data<root->data){
        root->left = deleteNode(root->left,data);
    }
    else if(data>root->data){
        root->right = deleteNode(root->right,data);
    }
    else{
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

        struct node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
    }
    return root;
}

int main(){
    struct node * root = NULL;
    int choice,data;
    printf("\n Binary Search Tree Operations.");
    printf("\n 1.Insert a node.");
    printf("\n 2.Inorder Traversal");
    printf("\n 3.Delete a node from the BST");
    printf("\n 4.Exit.");
    while(1){
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\n Enter data:");
                scanf("%d",&data);
                root = insertNode(root,data);
                break;
            case 2:
                inordertraversal(root);
                break;
            case 3:
                printf("\n Enter the element to be deleted:");
                scanf("%d",&data);
                root = deleteNode(root,data);
                break;
            case 4:
                exit(0);
            default:
                printf("\n Try again!");
                break;
        }
    }
    return 0;
}
