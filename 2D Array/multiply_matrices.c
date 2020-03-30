#include <stdio.h>
int main()
{
int i,j,row,col,k,sum=0;
scanf("%d %d",&row,&col);
int arr1[row][col];
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
}
int arr2[row][col];
int arr3[row][col];
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        scanf("%d",&arr2[i][j]);
    }
}
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        sum=0;
        for(k=0;k<row;k++)
        {
            sum=sum+arr1[i][k]*arr2[k][j];
        }
        arr3[i][j]=sum;
    }
}
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("%d ",arr3[i][j]);
    }
    printf("\n");
}
    return 0;
}