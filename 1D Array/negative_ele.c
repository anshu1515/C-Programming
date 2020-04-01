#include <stdio.h>
int main()
{
    int i;
    int negnum[7];
    for(i=0;i<=6;i++)
    {
        scanf("%d",&negnum[i]);
    
    if(negnum[i]<0)
    {
        printf("Negative Element[%d] :%d\n",i,negnum[i]);
    }
    }
    return 0;
}