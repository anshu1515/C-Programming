#include <stdio.h>
int main()
{
int l,b,peri,area;
scanf("%d %d",&l,&b);
peri=2*(l+b);
area=l*b;
printf("perimeter of rectangle:%d\n",peri);
printf("area of rectangle:%d",area);
    return 0;
}