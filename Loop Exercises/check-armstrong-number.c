#include <stdio.h>
#include <math.h>
int main()
{
int n,opnum,oppower,sum=0,count=0,power,last;
scanf("%d",&n);
opnum=n;
while(opnum>0)
{
    count=count+1;
    opnum=opnum/10;
}
oppower=n;
while(oppower>0)
{
    last=oppower%10;
    power=pow(last,count);
    sum=sum+power;
    oppower=oppower/10;
}
    if(sum==n)
    {
        printf("%d is armstrong number",n);
    }
    else
    {
        printf("%d is not armstrong number",n);
    }
    return 0;
}