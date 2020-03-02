#include <stdio.h>
int main()
{
    int a=10;
    short x=100;
    long y=20000;
    unsigned long b=40007867;
    unsigned short c=299;
    long long u=100000;
    unsigned long long v=38888675;
    unsigned int m=234;
    double g=10.9999;
    long double k=78.9999999;
    printf("%d\n",a);
    printf("%hi\n",x);
    printf("%ld\n",y);
    printf("%lu\n",b);
    printf("%hu\n",c);
    printf("%lld\n",u);
    printf("%llu\n",v);
    printf("%d\n",m);
    printf("%lf\n",g);
    printf("%Lf\n",k);
    return 0;
}