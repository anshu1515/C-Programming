#include <stdio.h>
int main()
{
    int i;
    int maxmin[4];
    for(i=0;i<=3;i++)
    {
    scanf("%d",&maxmin[i]);
    }
    int max,min;
    max=maxmin[0];
    for(i=1;i<=3;i++)
    {
    if(max<maxmin[i])
    {
        max=maxmin[i];
    }
    min=maxmin[0];
    if(min>maxmin[i])
    {
        min=maxmin[i];
    }
    }
printf("Max number is:%d\n",max);
printf("Min number is :%d",min);
    return 0;
}