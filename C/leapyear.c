#include<stdio.h>
void main(){
    int chk_year;
    printf("\n Enter a year:");
    scanf("%d",&chk_year);
    if(chk_year%400 == 0)
        printf("\n %d is a leap year",chk_year);
    else if (chk_year%100 ==0)
        printf("\n %d is not a leap year",chk_year);
    else if (chk_year%4 == 0)
        printf("\n %d is a leap year",chk_year);
    else
        printf("\n %d is not a leap year",chk_year);
        
}