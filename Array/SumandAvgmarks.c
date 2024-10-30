#include<stdio.h>
int main(){
    int i,n,sum=0,marks[100];
    float avg;
    printf("\n Enter the no of sub:");
    scanf("%d",&n);
    printf("\n enter the individual marks of the %d subjects are respectively:",n);
    for(i=0;i<n;i++){
        printf("\n sub %d -",i);
        scanf("%d",&marks[i]); 
    }
    for(i=0;i<n;i++){
        printf("%d ",marks[i]);
    }
    printf("\n The sum of the marks of %d subs:",n);
    for(i=0;i<n;i++){
        sum=sum+marks[i];
    }
    printf("%d",sum);
    avg=sum/n;
    printf("\n The avg marks is=%f",avg);
    return 0;
}