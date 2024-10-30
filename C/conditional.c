#include<stdio.h>
int main(){
    int math_marks;
    printf("\n Enter math marks:");
    scanf("%d",& math_marks);
    if(math_marks == 100)
    printf("\n O grade");
    else if (90<math_marks<100)
    printf("\n E grade");
    else if(80<math_marks<90)
    printf("\n A grade");
    return 0;
}