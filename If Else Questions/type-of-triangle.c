#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b==c)
{
    printf("triangle is equilateral");
}
else if(a==b||b==c||c==a)
{
    printf("triangle is isosceles");
}
else
{
   printf("triangle is scalene");
}
    return 0;
}