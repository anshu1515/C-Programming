#include <stdio.h>
#include <math.h>
int findarmstrong(int m,int n);
int main()
{
int x,y,armstrong;
scanf("%d %d",&x,&y);
printf("all armstrong num from %d to %d:",x,y);
armstrong=findarmstrong(x,y);
    return 0;
}
int findarmstrong(int m,int n)
{
    int i,sum,power,last,opnum,oppr,count;
    for(i=m;i<=n;i++)
    {
        opnum=i;
        sum=0;
        count=0;
        while(opnum>0)
        {
            count=count+1;
            opnum=opnum/10;
        }
            oppr=i;
            while(oppr>0)
            {
                last=oppr%10;
                power=pow(last,count);
                sum=sum+power;
                oppr=oppr/10;
            }
    if(sum==i)
    {
     printf(" %d",i);
    }
    }
    return 0;
    
}