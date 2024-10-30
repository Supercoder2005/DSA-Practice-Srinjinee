#include<stdio.h>
int main()
{
    char str[]="CollegeWallah";
    str[1]=98; // ASCII value of 98 is 'b'
    int i=0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}