#include<stdio.h>
int main()
//{
   // int x=3,y,z;
    //y=x=10; // at first x ka value tha 3 then it assigns to value 10 and also y=10
    //z=x<10; // z=x=10 but 10<10 this statement is false; in boolean datatype false means 0 
    //printf("\n x=%d y=%d z=%d" , x,y,z); // it will print value of x =10 y=10 z=0
    //return 0;    
//}
{
    int a=5,b,c;
    b=a=15;
    c=a<15;
    printf("\n a=%d b=%d c=%d",a,b,c);
    return 0;
}