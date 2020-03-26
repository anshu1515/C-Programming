#include <stdio.h>
int main()
{
 int i,n,j,last,opnum,sum,fact;
scanf("%d",&n);
printf("All Strong Numbers Between 1 to %d\n",n);
for(i=1;i<=n;i++)
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
printf("%d  ",i);
}
}
    return 0;
}