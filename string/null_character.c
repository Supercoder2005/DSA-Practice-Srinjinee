#include<stdio.h>
int main(){
    //char arr[]={'H','e','l','l','o'};
    //char ch = '\0';//null character (ASCII value of \0 is 0 but 0 is 48)
   // printf("%c",ch); // null character will never be printed 
  // char str[] = {'m','a','m','p','u','j','i',};
  char str[] = " I am the best";
   int i=0;
   while (str[i]!= '\0'){
    printf("%c",str[i]);
    i++;
   }
    return 0;
}