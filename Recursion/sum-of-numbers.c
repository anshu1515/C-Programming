#include <stdio.h>
int s1(int,int);
int main()
{
int n1,n2,sum;
scanf("%d %d",&n1,&n2);
sum=s1(n1,n2);
printf("%d",sum);
    return 0;
}
int s1(int x,int y)
{
    if(x==y)
    return x;
    else
    return x+s1(x+1,y);
}