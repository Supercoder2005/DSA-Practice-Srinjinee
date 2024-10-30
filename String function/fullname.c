#include<stdio.h>
#include<string.h>
int main()
{
    char fname[100],mname[100],lname[100];
    printf("\n Enter the first name:");
    gets(fname);
    printf("\n Enter the middle name:");
    gets(mname);
    printf("\n Enter the last name:");
    gets(lname);
    strcat(fname," "); // fname_ ---> it will be stored inside fname
    strcat(fname,mname);// fname_mname ---> will be stored inside fname
    strcat(fname," ");// fname_mname_ ---> will be stored inside fname
    strcat(fname,lname);// fname_mname_lname ---> will be stored totally inside fname
    //puts(fname);
    printf("\n The full name is :%s",fname);
    return 0;

}