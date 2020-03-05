#include <stdio.h>
int main()
{
    int n,re;
    scanf("%d",&n);
    re=n%2;
    switch(re)
    {
        case 0:
        printf("%d is even",n);
        break;
        case 1:
        printf("%d is odd",n);
        break;
    }
    return 0;
}