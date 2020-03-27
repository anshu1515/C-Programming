#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int neg[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&neg[i]);
    }
    int count=0;
for(i=1;i<=n;i++)
{
    if(neg[i]<0)
    {
        count=count+1;
    }
}
printf("negatve num :%d",count);
    return 0;
}