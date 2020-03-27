#include <stdio.h>
#include <math.h>
int findarmstrong(int m);
int main()
{
int x,armstrong;
scanf("%d",&x);
armstrong=findarmstrong(x);
    return 0;
}
int findarmstrong(int m)
{
    int i,sum=0,power,last,opnum,oppr,count=0;
        opnum=m;
        while(opnum>0)
        {
            count=count+1;
            opnum=opnum/10;
        }
            oppr=m;
            while(oppr>0)
            {
                last=oppr%10;
                power=pow(last,count);
                sum=sum+power;
                oppr=oppr/10;
            }
    if(sum==m)
    {
     printf("%d is armstrong",m);
    }
    else
    {
     printf("%d is not armstrong num",m);
    }
    return 0;
}