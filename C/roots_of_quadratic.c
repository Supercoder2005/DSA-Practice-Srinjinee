#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,d;
    float x,y;
    printf("\n Enter the values of a,b&c:");
    scanf("%d%d%d",&a,&b,&c);
    d= b*b - 4*a*c;
    if(d==0){
        printf("\n Both roots are equal.");
        x=-b/(2*a);
        y=x;
        printf("\n The first root is=%f",x);
        printf("\n The second root is=%f",y);
    }
    else if(d>0){
        printf("\n Both roots are real and different.");
        x=(-b + sqrt(d))/(2.0*a);
        y=(-b - sqrt(d))/(2.0*a);
        printf("\n The first root is=%f",x);
        printf("\n The second root is=%f",y);
    }
    else {
        printf("\n The roots are imaginary. \n No Solution");
    }
}