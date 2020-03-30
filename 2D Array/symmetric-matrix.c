#include <stdio.h>
int main()
{
int i,j,n,flag=0;
scanf("%d",&n);
int arr[100][100];
int brr[100][100];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    brr[j][i]=arr[i][j];   
  }
}
flag=1;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    if(arr[i][j]!=brr[i][j]) 
     {
    flag=0;
    break;
    }
    }
}
if(flag==1)
 {
     printf("Symmetric Matrix");
 }
 else
 {
printf("Not Symmetric Matrix");
 }
return 0;
}