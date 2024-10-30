#include<stdio.h>
int fact(int x){
    int i,factorial = 1;
    for(i=1;i<=x;i++){
        factorial = factorial * i;
    }
    return factorial;
}
int main(){
    int n,sum=0,reminder;
    printf("\n Enter a number:");
    scanf("%d",&n);
    int original_num = n;
    while(n!=0){
        reminder=n%10;
        sum=sum+fact(reminder);
        n=n/10;
    }
    printf("%d",n);
    printf("\n Sum=%d",sum);
    printf("\n Original no is %d",original_num);
    if(sum==original_num){
        printf("\n The given no is a strong/peterson number.");
    }
    else{
        printf("\n The given no is not a strong/peterson number.");
    }
    return 0;

}