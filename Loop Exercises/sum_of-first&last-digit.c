#include <stdio.h>
#include <math.h>
int main()
{
int n,last,first,sum=0;
scanf("%d",&n); 
last=n%10;
first=n;
while(first>=10)
{
first=first/10;
}
sum=last+first;
printf("%d",sum);
    return 0;
}