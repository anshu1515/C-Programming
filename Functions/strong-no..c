#include <stdio.h>
int findstrong(int m);
int main()
{
int x,strong;
scanf("%d",&x);
strong=findstrong(x);
    return 0;
}
int findstrong(int m)
{
    int i,sum=0,fact,last,opnum;
        opnum=m;
        while(opnum>0)
        {
            last=opnum%10;
            fact=1;
            for(i=1;i<=last;i++)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            opnum=opnum/10;
        }
        if(sum==m)
        {
            printf("%d is strong",m);
        }
        else
        {
            printf("%d is not strong num",m);
        }
    return 0;
}