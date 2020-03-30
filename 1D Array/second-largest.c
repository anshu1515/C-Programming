#include <stdio.h>
#include<limits.h>
int main()
{
int i,size,m1,m2;
scanf("%d",&size);
int arr[100];
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
m1=m2=INT_MIN;
for(i=0;i<size;i++)
{
    if(arr[i]>m1)
    {
    m2=m1;
    m1=arr[i];
    }
     else if(arr[i]>m2&&arr[i]<m1)
    {
        m2=arr[i];
    }
}
    printf("%d %d",m1,m2);
    return 0;
}