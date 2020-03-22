#include <stdio.h>
int main()
{
 int i,num,prime=1;
 scanf("%d",&num);
 for(i=2;i<num;i++)
 {
     if(num%i==0)
     {
         prime=0;
         break;
     }
 }
if(prime==0)
{
    printf("Not Prime Number");
}
else
{
    printf("Prime Number");
}
    return 0;
}