#include<stdio.h>
int main()
{
    int i=65;
    char j='A';
    if(i==j)
       printf("\n c is wow");
    else 
       printf("\n c is a headache");
    return 0;
}
// here the output will be : c is wow  because while checking the if condition i==j it will consider the ASCII value of A which is 65 . 