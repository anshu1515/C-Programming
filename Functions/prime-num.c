#include <stdio.h>
int findprime(int);
int main()
{
    int x,prime;
    scanf("%d",&x);
    prime=findprime(x);
    return 0;
}
int findprime(int n)
{
    int i,pprime;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            pprime=0;
            
        }
    }
    if(pprime==0)
    {
        printf("%d is not prime",n);
    }
     else
     {
      printf("%d is prime",n);
     }
    return 0;
}