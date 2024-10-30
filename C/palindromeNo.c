#include<stdio.h>
int main(){
    int n,rev=0,reminder,original;
    printf("\n Enter the number:");
    scanf("%d",&n);
    original = n;
    while(n!=0){
        reminder=n%10;
        rev=rev*10 + reminder;
        n=n/10;
    }
    printf("\n the reversed no is = %d",rev);
    if(rev==original)
        printf("\n This is a palindrome no");
    else 
        printf("\n This is not a palindrome no");
    return 0;
}