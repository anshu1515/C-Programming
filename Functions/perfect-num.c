#include <stdio.h>
int findperfect(int);
int main()
{
int x,perfect;
scanf("%d",&x);
perfect=findperfect(x);
    return 0;
}
int findperfect(int n)
{
    int i,rem,opnum,sum=0;
    opnum=n;
    for(i=1;i<opnum;i++)
    {
        rem=opnum%i;
    if(rem==0)
    {
    sum=sum+i;
    }
    }
if(sum==n)
{
    printf("%d is perfect",n);
}
else
{
    printf("%d is not perfect",n);
}
return 0;
}