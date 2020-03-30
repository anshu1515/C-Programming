#include <stdio.h>
int main()
{
int n1,n2,i;
scanf("%d %d",&n1,&n2);
int arr1[n1],arr2[n2];
for(i=0;i<n1;i++)
{
    scanf("%d",&arr1[i]);
}
for(i=0;i<n2;i++)
{
    scanf("%d",&arr2[i]);
}
int size=n1+n2;
int merg[size];
int index=0;
for(i=0;i<n1;i++)
{
    merg[i]=arr1[i];
    printf("%d ",merg[i]);
    index++;
} 
for(i=0;i<n2;i++)
{
    merg[index]=arr2[i];
    printf("%d ",merg[index]);
}
    return 0;
}