#include<stdio.h>
void england(){
    printf("\n You are in england");
    return ;
}
void australia(){
    printf("\n You are in australia");
    england();
    return;
}
void india(){
    printf("\n You are in india");
    australia();
    return;
}
int main(){
    india();
    return 0;
}