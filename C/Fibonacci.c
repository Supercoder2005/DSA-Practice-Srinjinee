#include<stdio.h>
int main(){
    int count=10;
    int firstTerm=0,secondTerm=1;
    printf("\n First %d Fibonacci numbers:",count);
    while(count>0){
        printf("%d, ",firstTerm);
        int nextTerm=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;
        count--;
    }
    return 0;
}