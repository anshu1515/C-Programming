#include <stdio.h>
int main()
{
    int i,size,pos;
    scanf("%d %d",&size,&pos);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[pos-1]=0;
for(i=pos-1;i<size-1;i++)
{
    arr[i]=arr[i+1];
}
size--;
for(i=0;i<size;i++)
{
    printf("%d  ",arr[i]);
}
    return 0;
}