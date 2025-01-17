#include<stdio.h>

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int partition(int a[], int lb, int ub){
    int pivot,start,end;
    pivot = a[lb];
    start = lb;
    end = ub;
    while(start<end){
        while(a[start]<= pivot){
            start ++;
        }
        while(a[end]>pivot){
            end --;
        }
        if(start<end){
            swap(&a[start],&a[end]);
        }
    }
    swap(&a[lb],&a[end]);
    return end;
}

void quick_sort(int a[],int lb,int ub){
    int loc;
    if(lb<ub){
        loc = partition(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
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
    quick_sort(a,0,n-1);
    display(a,n);
    return 0;
}