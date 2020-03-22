#include <stdio.h>
int main()
{
int n,rev=0,op;
scanf("%d",&n);
op=n;
while(n>0)
{
rev=(rev*10)+n%10;
n=n/10;
}
if(rev==op)
{
    printf("Palindrome Number");
}
else
{
    printf("Not Palindrome Number");
}
    return 0;
}