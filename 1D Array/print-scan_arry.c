#include <stdio.h>
int main()
{
    int i;
    int num[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
        printf("num[%d] : %d\n",i,num[i]);
    }

    return 0;
}