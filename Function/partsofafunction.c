#include<stdio.h>
char func(); \\Function Declaration
char func(){
    char a;
    printf("\n Enter a character:"); \\ Function Definition
    scanf("%c",&a);
    return a;
}
void main(){ 
    char ch;
    ch=func(); \\ Function call
    printf("\n ch=%c",ch);

}