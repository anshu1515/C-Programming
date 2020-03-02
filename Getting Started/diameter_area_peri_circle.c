#include <stdio.h>
#include <math.h>
int main()
{
int r,d;
    float a,p;
    scanf("%d",&r);
    d=2*r;
    p=2*M_PI*r;
    a=M_PI*r*r;
    printf("diameter:%d\n",d);
    printf("perimeter:%.2f\n",p);
    printf("area:%.2f",a);
    return 0;
}