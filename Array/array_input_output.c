#include<stdio.h>
int main(){
    int arr[5],i;
for(i=0;i<=4;i++){
    printf("\n The no %d element:",i);
    scanf("%d",& arr[i]);
}
for(i=0;i<=4;i++){
    printf("\n The user given elment no %d is=%d",i,arr[i]);
}
return 0;
}
