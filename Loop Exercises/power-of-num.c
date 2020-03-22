#include <stdio.h>
int main()
{
int i,b,ex ,powr=1;
scanf("%d %d",&b,&ex);
for(i=1;i<=ex;i++)
{
powr=powr*b;
}
printf("%d",powr);
    return 0;
}