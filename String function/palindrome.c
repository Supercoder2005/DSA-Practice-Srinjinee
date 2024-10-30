#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("\n enter any string:");
    gets(s1);
    if(strcmp(s1,strrev(s1))==0)
        printf("\n Palindrome");
    else
        printf("\n Not a palindrome");
    return 0;
}