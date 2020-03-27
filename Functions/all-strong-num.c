#include <stdio.h>
int findstrong(int m,int n);
int main()
{
int i,x,y,strong,sum;
scanf("%d %d",&x,&y);
printf("all strong numbers from %d to %d:",x,y);
strong=findstrong(x,y);
    return 0;
}
int findstrong(int m,int n)
{
    int i,j,sum,fact,last,opnum;
    for(i=m;i<=n;i++)
    {
        opnum=i;
        sum=0;
        while(opnum>0)
        {
            last=opnum%10;
            fact=1;
            for(j=1;j<=last;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            opnum=opnum/10;
        }
        if(sum==i)
        {
            printf(" %d",i);
        }
    }
    return 0;
}