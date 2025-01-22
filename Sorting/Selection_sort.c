// WOrking principle : divide the array into two parts - sorted sublist & unsorted sublist . Find out the minimum element from the 
// unsorted sublist and swap that with the first element of the unsorted sublist . after swapping that element belongs to the sorted sublist

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
#include<stdio.h>
int main(){
    int i,n,j,min;
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

    // selection sort 
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(&arr[i],&arr[min]);
        }
    }
    printf("\n The array after sorting is ---- \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}