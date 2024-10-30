#include<stdio.h>
int main(){
    int monthno;
    printf("\n Enter the month number:");
    scanf("%d",& monthno);
    switch(monthno){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                printf("\n this month has 31 days ");
                break;
        case 2:
            printf("\n The 2nd month is february and has 28 days ");
            printf("\n In case of leap year it has 29 days.");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n This month has 30 days.");
            break;
        default :
            printf("\n Invalid month number.");
    }
return 0;
}