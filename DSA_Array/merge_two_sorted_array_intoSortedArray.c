#include<stdio.h>
int main(){
    int i,s1,s2,s3;
    printf("\n Enter the size of the array:");
    scanf("%d",&s1);
    int a1[s1];

    printf("\n Enter the elements of the 1st array in sorted order:");
    for(i=0;i<s1;i++){
        printf("\n Element[i]");
        scanf("%d",&a1[i]);
    }

    printf("\n Enter the size of the array:");
    scanf("%d",&s2);
    int a2[s2];

    printf("\n enter the elements of the second array in sorted order:");
    for(i=0;i<s2;i++){
        scanf("%d",&a2[i]);
    }

    s3=s1+s2;
    int a3[s3];

    i=0;
    int j=0,k=0;
    while(i<s1 && j<s2){
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            i++;
            k++;
        }
        else{
            a3[k]=a2[j];
            k++;
            j++;
        } 
    }
    while(i<s1){
        a3[k]=a1[i];
        i++;
        k++;
    }
    while(j<s2){
        a3[k]=a2[j];
        k++;
        j++;
    }
    printf("\n The array after merging ---\n");
    for(i=0;i<s3;i++){
        printf("%d ",a3[i]);
    }
    return 0;
}
    
