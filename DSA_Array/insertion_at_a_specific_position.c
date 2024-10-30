#include<stdio.h>
int main(){
    int i,n;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array:");
    for(i=0;i<n;i++){
        printf("\n Element[i]");
        scanf("%d",&arr[i]);
    }
    printf("\n The array is given below---");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
    int num,pos;
    printf("\n Enter the number that you want to insert:");
    scanf("%d",&num);
    printf("\n Enter the position at which insertion will be done:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]= num;
    n++;
    printf("\n Array after insertion:");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
    return 0;
}