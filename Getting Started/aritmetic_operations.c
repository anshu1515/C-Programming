#include <stdio.h>
int main()
{
int a,b,sum=0,sub,mul,div;
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("Addition of two numbers:%d\n",sum);
printf("Subtraction of two numbers:%d\n",sub);
printf("Multiplication of two numbers:%d\n",mul);
printf("Division of two numbers:%d",div);
    return 0;
}