#include <stdio.h>
int main()
{
int i,j,n,up;
scanf("%d",&n);
int arr[100][100];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    scanf("%d",&arr[i][j]);
    }
}
up=1;
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
      if((j<i)&&arr[i][j]!=0)
      {
          up=0;
          break;
      }
  }
}
if(up==1)
{
    printf("Upper Triangular Matrix\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
}   
}
else 
{
    printf("Not Upper Triangular Matrix");
}
return 0;
}