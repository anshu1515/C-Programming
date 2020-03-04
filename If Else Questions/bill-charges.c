#include <stdio.h>
int main()
{
int u;
scanf("%d",&u);
float total,sur_c,amt;
if(u<=50)
{
    amt=u*0.50;
}
else if(u<=150)
{
    amt=25+((u-50)*0.75);
}
else if(u<=250)
{
    amt=100+((u-150)*1.20);
}
else 
{
    amt=220+((u-250)*1.50);
}
sur_c=amt*0.20;
total=amt+sur_c;
printf("total amount:%.2f",total);
    return 0;
}