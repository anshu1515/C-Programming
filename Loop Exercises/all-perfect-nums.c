#include <stdio.h>
int main()
{
 int i,n,j,opnum,sum;
 scanf("%d",&n);
 printf("All Perfect Numbers From 1 to %d\n",n);
 for(i=1;i<=n;i++)
 {
     sum=0;
     for(j=1;j<i;j++)
     {
         if(i%j==0)
         {
             sum=sum+j;
         }
     }
 if(sum==i)
 {
     printf(" %d",i);
 }
 }
    return 0;
}