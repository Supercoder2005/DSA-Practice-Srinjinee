#include<stdio.h>
void tower(int n, char s, char h, char d){
    if(n==0)
    return ;
    tower(n-1,s,d,h);
    printf("\n %c --> %c",s,d);
    tower(n-1,h,s,d);
    return;
}
int main(){
    int n;
    char a='A',b='B',c='C';
    printf('"\n Enter the no of disks:');
    scanf("%d",&n);
    tower(n,a,b,c);
    return 0;
}