#include <stdio.h>
int main()
{
int n1,num,i,found;
scanf("%d %d",&n1,&num);
int arr[i];
for(i=0;i<n1;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n1;i++)
{
    if(arr[i]==num)
    {
        found=1;
        break;
    }
}
    if(found==1)
    {
        printf("%d",i);
    }
    else if(found!=1)
    {
        printf("%d",n1);
    }
    return 0;
}