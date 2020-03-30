#include <stdio.h>
int main()
{
int i,j,n,a;
scanf("%d %d",&n,&a);
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
    for(j=0;j<n;j++)
    {
        arr1[i][j]=a*arr1[i][j];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d ",arr1[i][j]);
    }
    printf("\n");
}
return 0;
}