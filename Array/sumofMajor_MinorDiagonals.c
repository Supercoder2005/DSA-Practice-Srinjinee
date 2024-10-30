#include<stdio.h>
int main(){
    int i,j,m,n,arr[50][50];
    printf("\n Enter the no of rows:");
    scanf("%d", &m);
    printf("\n Enter the no of coloumns:");
    scanf("%d",& n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",& arr[i][j]);
        }
    }
    int s1=0,s2=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                s1=s1+arr[i][j];
            }
            if(i+j == n-1){
                s2=s2+arr[i][j];
            }
        }
    }
    printf("\n The sum of the major diagonal =%d \n The sum of minor diagonal=%d",s1,s2);
}