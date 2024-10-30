#include<stdio.h>
int main(){
    char grade;
    printf("\n enter the grade of the student :");
    scanf("%c",& grade);
    switch(grade){
        case 'E':
            printf("\n Excellent");
            break;
        case 'V':
            printf("\n Very Good");
            break;
        case 'G':
            printf("\n Good");
            break;
        case 'A':
            printf("\n average");
            break;
        case 'F':
            printf("\n Fail");
            break;
        default :
            printf("\n invalid grade found");

    }
return 0;
}