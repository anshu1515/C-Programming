#include <stdio.h>
#include <math.h>
int main()
{
int last,n,swpnum,powr,first,count;
scanf("%d",&n);
last=n%10;
count=log10(n);
first=n/pow(10,count);
swpnum=last*pow(10,count);
powr=pow(10,count);
swpnum=swpnum+n%powr;
swpnum=swpnum-last;
swpnum=swpnum+first;
printf("%d",swpnum);
    return 0;
}