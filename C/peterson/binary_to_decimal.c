#include<stdio.h>
#include<math.h>
int main(){
    int m;
    int n;
    int dec=0;
    int j=0;
    printf("Enter the binay number:\n");
    scanf("%d",&m);
    for(int i=m;i!=0;i=i/10){
        n=i%10;
        dec=dec+(n*pow(2,j));
        j++;
    }
    printf("The decimal form is %d",dec);
    return 0;
}