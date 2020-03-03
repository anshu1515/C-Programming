#include <stdio.h>
int main()
{
int n,m,p;
scanf("%d %d %d",&n,&m,&p);
if(n>m&&n>p)
{
    printf("%d",n);
}
else if(m>p)
{
    printf("%d",m);
}
else
{
    printf("%d",p);
}
    return 0;
}