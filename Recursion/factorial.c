#include <stdio.h>
int fact(int);
int main()
{
int num,ans;
scanf("%d",&num);
ans=fact(num);
printf("The Factorial of %d is %d",num,ans);
    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}