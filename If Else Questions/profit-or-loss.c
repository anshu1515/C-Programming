#include <stdio.h>
int main()
{
int sp,cp,profit,loss;
scanf("%d %d",&sp,&cp);
if(sp>cp)
{
    profit=sp-cp;
    printf("profit:%d",profit);
}
else if(cp>sp)
{
    loss=cp-sp;
    printf("loss:%d",loss);
}
else
{
   printf("no profit no loss");
}
    return 0;
}