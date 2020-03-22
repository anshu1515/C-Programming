#include <stdio.h>
int main()
{
 int i,n,opnum,sum=0,rem;
 scanf("%d",&n);
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
     printf("Perfect Number");
 }
 else
 {
     printf("Not Perfect Number");
 }
    return 0;
}