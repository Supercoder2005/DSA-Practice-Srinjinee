#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int i,j,n;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        printf("Element[%d]:",i);
        scanf("%d",&arr[i]);
    }

    //Bubble Sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    printf("\n After sorting the array will be ---\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}