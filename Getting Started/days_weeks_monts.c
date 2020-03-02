#include <stdio.h>
int main()
{
    int d,days,w,y;
    scanf("%d",&d);
    w=(d%365)/7;
    y=d/365;
    days=d-(y*365)-(w*7);
    printf("weeks:%d\n",w);
    printf("days:%d\n",days);
    printf("years:%d",y);
    return 0;
}