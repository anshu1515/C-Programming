#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c;
float r1,r2,imag;
float dis;
scanf("%f %f %f",&a,&b,&c);
dis=(b*b)-(4*a*c);
if(dis>0)
{
 r1=(-b+sqrt(dis))/(2*a);
 r2=(-b-sqrt(dis))/(2*a);
 printf("Real and Distinct Roots:%.2f and %.2f",r1,r2);
}
else if(dis==0)
{
    r1=r2=-b/(2*a);
    printf("Real and Equal Roots:%.2f and %.2f",r1,r2);
}
else if(dis<0)
{
  r1=r2=-b/(2*a);
  imag=sqrt(-dis)/(2*a);
  printf("Complex Roots exists:%.2f+i%.2f and %.2f-i%.2f",r1,imag,r2,imag);
}
    return 0;
}