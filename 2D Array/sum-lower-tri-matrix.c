#include <stdio.h>
int main()
{
int i,j,n,sum=0;
scanf("%d",&n);
int arr[100][100];
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
        if(j<i)
        {
            sum+=arr[i][j];
        }
    }
}
printf("Sum of Lower Triangular Matrix=%d",sum);
}