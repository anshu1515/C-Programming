#include <stdio.h>
int main()
{
int i,j,n,yes;
scanf("%d",&n);
int arr1[100][100];
int arr2[100][100];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    scanf("%d",&arr1[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
   scanf("%d",&arr2[i][j]);
    }
}
yes=1;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
           if(arr1[i][j]!=arr2[i][j])
           {
           yes=0;
           break;
           }
    }
}
if(yes==1)
    {
        printf("Equal Matrices");
    }
    else
    {
        printf("Not Equal Matrices");
    }
return 0;
}