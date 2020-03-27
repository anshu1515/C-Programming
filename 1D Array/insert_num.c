#include <stdio.h>
int main()
{
int size,num,pos,i;
scanf("%d %d %d",&size,&num,&pos);
int arr[size];
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
for(i=size;i>=pos;i--)
{
    arr[i]=arr[i-1];
}
arr[pos-1]=num;
printf("the elements of array:");
for(i=0;i<=size;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}
