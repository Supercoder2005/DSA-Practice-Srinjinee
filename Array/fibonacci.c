#include<stdio.h>
int main(){
    int count=10;
    printf("\n The first %d fibonacci numbers are:",count);
    int firstno=0,secondno=1;
    while(count>0){
        printf(" %d, ",firstno);
        int nextno=firstno+secondno;
        firstno=secondno;
        secondno=nextno;
        count--;
    }
    return 0;
}