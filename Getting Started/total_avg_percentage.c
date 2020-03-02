#include <stdio.h>
int main()
{
int a,b,c,d,e,t;
float av,p;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
t=a+b+c+d+e;
av=t/5;
p=(t*100)/500;
printf("total marks:%d\n",t);
printf("average:%.2f\n",av);
printf("percentage:%.2f",p);
    return 0;
}