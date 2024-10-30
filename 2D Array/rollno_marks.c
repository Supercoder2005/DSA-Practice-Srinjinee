#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("\n Enter no of students:");
    scanf("%d",&r);
    printf("\n enter no of coloumns:");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        printf("\n Enter the rollno & marks of the student %d th student-",i);
        for(j=0;j<c;j++){
           
            scanf("%d",& arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]); 
        }
        printf ("\n");
    }
    return 0;
}