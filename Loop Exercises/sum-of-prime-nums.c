#include <stdio.h>
int main()
{
 int i,num,prime,j,sum=0;
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
     prime=0;
     for(j=2;j<=i/2;j++)
     {
         if(i%j==0)
         {
        prime++;
         break;
         }
     }
if(prime==0 && i!=1)
{
    sum=sum+i;
}
 }
printf("Sum of all prime numbers:%d",sum);
    return 0;
}