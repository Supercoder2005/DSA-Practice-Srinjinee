#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter any number:");
    scanf("%d",&n);
    // Ternary Operator syntax : condition ? expression 1 : expression 2;
    n%2==0 ? printf("Even number") : printf("Odd number");
    return 0;
}