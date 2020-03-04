#include <stdio.h>
int main()
{
int a,b,c,sum=0;
scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;
if(sum==180&&a!=0&&b!=0&&c!=0)
{
    printf("Triangle is Valid");
}
else
{
    printf("Triangle is not Valid");
}
    return 0;
}