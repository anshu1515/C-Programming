#include <stdio.h>
int main()
{
 int t1=0,t2=1,next;
 int n,i;
scanf("%d",&n);
next=t1+t2;
printf("The Fibonacci Series %d %d", t1, t2);
for(i=3;i<=n;i++)
{
printf(" %d",next);
t1=t2;
t2=next;
next=t1+t2;
}
    return 0;
}