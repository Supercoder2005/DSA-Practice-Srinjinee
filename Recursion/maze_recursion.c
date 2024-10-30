#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightWays=0;
    int downWays=0;
    if(cr==er && cc==ec) // when we reach the final position 
    return 1;
    if(cr==er) // when current row is equal to end row only Right way is possible i.e we have to add 1 in coloumn
    return rightWays += maze(cr,cc+1,er,ec);
    if(cc==ec) // when current coloumn is equal to end coloumn only down way is possible and we have to add 1 with row
    return downWays += maze(cr+1,cc,er,ec);
    if (cr<er && cc<ec) {
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
    }
    int TotalWays = rightWays + downWays;
    return TotalWays;
}
int main(){
    int n,m;
    printf("\n Enter the no of rows:");
    scanf("%d",&n);
    printf("\n Enter teh no of coloumns:");
    scanf("%d",&m);
    int ways=maze(1,1,n,m);
    printf("%d",ways);
    return 0;
}