#include <stdio.h>
int main()
{
int i,j,row,col,flag=0;
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
    for(j=0;j<col;j++)
    {
        if(i==j&&arr1[i][j]!=1)
        {
            flag=1;
            break;
        }
        else if(i!=j&&arr1[i][j]!=0)
        {
            flag=1;
            break;
        }
    }
}
if(flag==0)
{
    printf("Identity Matrix");
}
else
{
printf("Not Identity Matrix");
}
    return 0;
}