#include <stdio.h>
#include <math.h>
int main()
{
    int i,n1,n2,last,opnum,opower,sum,count,power;
scanf("%d %d",&n1,&n2);
printf("all armstrong numbers from %d to %d\n",n1,n2);
for(i=n1;i<=n2;i++)
{
opnum=i;
sum=0;
count=0;
while(opnum>0)
{
    count=count+1;
    opnum=opnum/10;
}
opower=i;
while(opower>0)
{
    last=opower%10;
    power=pow(last,count);
    sum=sum+power;
    opower=opower/10;
}
if(sum==i)
{
printf("%d  ",i);
}
}
    return 0;
}