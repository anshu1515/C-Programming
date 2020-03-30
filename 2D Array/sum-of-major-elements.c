#include <stdio.h>
int main()
{
int i,j,row,col,sum=0;
scanf("%d %d",&row,&col);
int arr1[row][col];
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
}
for(i=0;i<row;i++)
{
    sum=sum+arr1[i][i];
}
        printf("%d ",sum);
    return 0;
}