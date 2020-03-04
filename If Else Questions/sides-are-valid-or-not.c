#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a+b)>c)
{
    if((b+c>a))
    {
        if((c+a)>b)
        {
           printf("Sides of Triangle are Valid");
        }
    } 
}
else
{
   printf("Sides of Triangle are not Valid");
}
    return 0;
}