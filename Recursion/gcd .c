#include <stdio.h>
int gcd(int,int);
int main()
{
    int a,b,result;
    scanf("%d %d",&a,&b);
    result=gcd(a,b);
    printf("%d",result);
    return 0;
}
int gcd(int n1,int n2)
{
    if(n2==0)
    return n1;
    else
    return gcd(n2,n1%n2);
}