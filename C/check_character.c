#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter a single character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'||ch>='A' && ch<='Z'){
        printf("\n This is an alphabet");
    }
    else if(ch>'0' && ch<'9'){
        printf("\n This is a number");
    }
    else{
        printf("\n This is a special character");
    }
}