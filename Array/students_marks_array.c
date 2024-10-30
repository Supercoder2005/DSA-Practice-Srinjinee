#include<stdio.h>
int main(){
    int marks[10],i;
    for(i=0;i<10;i++){
        printf("\n Enter the marks of roll no %d :",i);
        scanf("%d",& marks[i]);
    }
    printf("the roll no of the student getting less than 35 marks is -");
    for(i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
}