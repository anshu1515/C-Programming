#include <stdio.h>
int main()
{
int n,m,p,max;
scanf("%d %d %d",&m,&n,&p);
max=(m>n&&m>p)?m:(n>p)?n:p;
printf("maxinum number:%d",max);
    return 0;
}