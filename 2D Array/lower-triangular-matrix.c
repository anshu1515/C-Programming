#include <stdio.h>
int main()
{
int i,j,n,low;
scanf("%d",&n);
int arr[100][100];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    scanf("%d",&arr[i][j]);
    }
}
low=1;
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
      if((j>i)&&arr[i][j]!=0)
      {
          low=0;
          break;
      }
  }
}
if(low==1)
{
    printf("Lower Triangular Matrix\n");
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
    printf("Not Lower Triangular Matrix");
}
return 0;
}