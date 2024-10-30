#include<stdio.h>
void palindrom( int arr[] ){
    int i,flag=0;
    for(i=0;i<= 5/2 ; i++ ){
        if( arr[i] != arr[5-i-1]){
            flag=1;
            break;
        }
    }
    if(flag == 0)
    printf("\n This is a palindrome array");
    else 
    printf("\n This is not a palindrome array");
    return ;
}
int main(){
    int arr[5]={1,2,3,2,1};
    palindrom(arr);
    return 0;
}