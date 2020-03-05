#include <stdio.h>
int main()
{
    int n1,n2,max;
    scanf("%d %d",&n1,&n2);
    max=n1>n2;
    switch(max)
    {
        case 0:
        printf("%d",n2);
        break;
        case 1:
        printf("%d",n1);
        break;
    }
    return 0;
}