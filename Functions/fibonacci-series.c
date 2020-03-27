#include <stdio.h>
void  fibnocciseries(int n);
int main()
{
    int y;
    scanf("%d",&y);
fibnocciseries(y);
    return 0;
}
void fibnocciseries(int n)
{
    int t1,t2,i,next;
    t1=0;
    t2=1;
    next=t1+t2;
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf("%d ",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }
}