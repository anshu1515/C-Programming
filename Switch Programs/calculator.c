#include <stdio.h>
int main()
{
float n1,n2,re=0;
char c;
scanf("%f %c %f",&n1,&c,&n2);
switch(c)
{
    case '+':
    re=n1+n2;
    break;
    case '-':
    re=n1-n2;
    break;
    case '*':
    re=n1*n2;
    break;
    case '/':
    re=n1/n2;
    break;
    default:
    printf("invalid operator");
    break;
}
printf("%.2f %c %.2f=%.2f",n1,c,n2,re);
    return 0;
}