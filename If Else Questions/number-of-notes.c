#include <stdio.h>
int main()
{
int amt;
int n500,n100,n50,n20,n10,n5,n2,n1;
n500=n100=n50=n20=n10=n5=n2=n1=0;
scanf("%d",&amt);
if(amt>=500)
{
    n500=amt/500;
    amt=amt-(n500*500);
}
if(amt>=100)
{
    n100=amt/100;
    amt=amt-(n100*100);
}
if(amt>=50)
{
    n50=amt/50;
    amt=amt-(n50*50);
}
if(amt>=20)
{
    n20=amt/20;
    amt=amt-(n20*20);
}
if(amt>=10)
{
    n10=amt/10;
    amt=amt-(n10*10);
}
if(amt>=5)
{
    n5=amt/5;
    amt=amt-(n5*5);
}
if(amt>=2)
{
    n2=amt/2;
    amt=amt-(n2*2);
}
if(amt>=1)
{
    n1=amt;
}
printf("notes of 500:%d\n",n500);
printf("notes of 100:%d\n",n100);
printf("notes of 50:%d\n",n50);
printf("notes of 20:%d\n",n20);
printf("notes of 10:%d\n",n10);
printf("notes of 5:%d\n",n5);
printf("notes of 2:%d\n",n2);
printf("notes of 1:%d",n1);
    return 0;
}