#include <stdio.h>
int fibo(int);
int main()
{
    int num,result;
    scanf("%d",&num);
    result=fibo(num);
    printf("%d",result);
    return 0;
}
int fibo(int n1)
{
    if(n1==0)
    return 0;
    else if(n1==1)
    return 1;
    else
    return fibo(n1-1)+fibo(n1-2);
}