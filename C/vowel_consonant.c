#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter a single character:");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
        printf("\n This is a vowel");
    }
    else if (ch>='b'&& ch<='z'){
        printf("\n This is a consonant");
    }
    else{
        printf("\n this is not an alphabet");
    }
    return 0;
}