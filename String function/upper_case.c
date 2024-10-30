#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    printf("\n Enter any string:");
    gets(st);
    strupr(st);
    puts(st);
    return 0;
}