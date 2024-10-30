#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++){
        if(i%2== 0){
            continue; // continue use korar manei holo oi loop take skip koro jodi condition true hoy
        }
        printf("%d ",i);
    }
    return 0;  
}