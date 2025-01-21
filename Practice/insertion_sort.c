#include<stdio.h>
int main(){
    int i,n,j,temp;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("\n Element %d :",i);
        scanf("%d",&arr[i]);
    }
    printf("\n The array given by the user ---- \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    // insertion sort 
    for(i=1;i<n;i++){
        temp = arr[i];

        j=i-1;
        while((j>=0) && (arr[j]>temp)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    printf("\n The given array after sorting ----\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}