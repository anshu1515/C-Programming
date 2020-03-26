#include <stdio.h>
int main()
{
 int i,n,last,opnum,sum=0,fact;
scanf("%d",&n);
opnum=n;
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
if(sum==n)
{
printf("Strong Number");
}
else
{
    printf("Not Strong Number");
}
    return 0;
}