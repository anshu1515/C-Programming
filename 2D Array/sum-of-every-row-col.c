#include <stdio.h>
int main()
{
int i,j,n,sum;
scanf("%d",&n);
int arr1[100][100];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    scanf("%d",&arr1[i][j]);
    }
}
for(i=0;i<n;i++)
{
    sum=0;
    for(j=0;j<n;j++)
    {
     sum=sum+arr1[i][j];
    }
    printf("%d row number:%d\n",i+1,sum);
}
for(i=0;i<n;i++)
{
    sum=0;
    for(j=0;j<n;j++)
    {
       sum=sum+arr1[j][i];
    }
    printf("%d col number:%d\n",i+1,sum);
}   
return 0;
}