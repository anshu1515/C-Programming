#include <stdio.h>
int main()
{
int i,j,row,col;
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
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
    arr2[j][i]=arr1[i][j];
    }
}
for(j=0;j<col;j++)
{
    for(i=0;i<row;i++)
    {
        printf("%d ",arr2[j][i]);
    }
    printf("\n");
}
    return 0;
}