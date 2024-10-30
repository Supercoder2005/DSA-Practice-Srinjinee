#include<stdio.h>
int main(){
    int marks;
    printf("\n Enter the marks out of 100:");
    scanf("%d",& marks);
    switch(marks/10){
        case 10:
        case 9:
        case 8: 
            printf("\n Grade-'A'");
            break;
        case 7: 
            printf("\n Grade-'B'");
            break;
        case 6: 
            printf("\n Grade-'C'");
            break;
        default : 
            printf("\n Grade - 'D'");
    }
    return 0;
}