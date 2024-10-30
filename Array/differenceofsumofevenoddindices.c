#include<stdio.h>
int main(){
    int i,arr[5]={1,2,3,4,5};
    int sumEven=0;
    int sumOdd=0;
    for(i=0;i<5;i++){
        if(i%2==0)
        sumEven += arr[i];
        else
        sumOdd += arr[i];
    }
    printf("\n The difference of the sum of elements at even and odd indices is =%d", sumEven-sumOdd);
    return 0;

}