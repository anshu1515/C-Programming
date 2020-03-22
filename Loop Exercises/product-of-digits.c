#include <stdio.h>
#include <math.h>
int main()
{
int n,last,pro=1;
scanf("%d",&n);
while(n>0)
{
last=n%10;
pro=pro*last;
n=n/10;
}
printf("%d",pro);
    return 0;
}