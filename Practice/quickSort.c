#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int lb,int ub){
    int start,end,pivot;
    pivot = arr[lb];
    start = lb;
    end = ub;
    while(start<end){
        while(arr[start]<=pivot){
            start ++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[end],&arr[lb]);
    return end;
}

void quickSort(int arr[],int lb,int ub){
    int loc;
    if(lb<ub){
        loc = partition(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}

void display(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\t %d",a[i]);
    }
}

int main(){
    int n,i;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\n Enter element %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\n The array is ----\n");
    display(a,n);

    printf("\n The array after applying quick sort ----\n");
    quickSort(a,0,n-1);
    display(a,n);

    return 0;
}