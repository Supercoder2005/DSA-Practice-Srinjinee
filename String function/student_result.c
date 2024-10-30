#include<stdio.h>
#include<string.h>
void main(){
    int rl,phy,chem,maths,total;
    float per;
    char nm[50],div[20];
    printf("\n Enter roll:");
    scanf("%d",&rl);
    printf("\n Enter th ename:");
    printf("%s",nm);
    printf("\n Enter the marks of phy,chem,maths:");
    scanf("%d%d%d",&phy,&chem,&maths);
    total=phy+chem+maths;
    per=total/3.0;
    if(per>=60)
        strcpy(div,"First");
    else if(per<60 && per>=48)
        strcpy(div,"Second");
    else if(per<48 && per>=36)
        strcpy(div,"Pass");
    else   
        strcpy(div,"Fail");
    printf("\n Roll No:%d \n Name:%s",rl,nm);
    printf("\n Marks in physics:%d \n marks in chemistry:%d \n Marks in Maths:%d",phy,chem,maths);
    printf("\n Total Marks=%d \n Percentage=%f \n Division=%s",total,per,div);

}