#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("\n Enter any string:");
    gets(s1);
    int length;
    length=strlen(s1);
    printf("\n The length of the given string is = %d",length);
    return 0;
}