#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter the percentage of student");
    scanf("%d",&n);
    if(n>90 && n<=100){
        printf("\n Excellent");
    }
    else if(n>80 && n<=90){
        printf("\n Very Good");
    }
    else if(n>70 && n<=80){
        printf("\n good");
    }
    else if(n>60 && n<=70){
        printf("\n Can do better");
    }
    else if(n>50 && n<=60){
        printf("\n Average");
    }
    else if(n>40 && n<=50){
        printf("\n below Average");
    }
    else{
        printf("\n Fail");
    }
    return 0;
}