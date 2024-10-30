#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter the age of Ram:");
    scanf("%d",&a);
    int b;
    printf("\n Enter the age of Shyam:");
    scanf("%d",&b);
    int c;
    printf("\n Enter the age of jadu:");
    scanf("%d",&c);
    if (a<b && a<c){
        printf("\n Ram is the youngest one");
    }
    if (b<a && b<c){
        printf("\n Shyam is the youngest one");
    }
    else{
        printf("\n Jadu is the youngest one");
    }
    return 0;
}