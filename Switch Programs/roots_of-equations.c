#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float r1,r2,d;
    float imag;
    int re,pm;
    scanf("%f %f %f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    re=d>0;
    pm=d<0;
    switch(re)
    {
        case 1:
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Distinct and Real Roots:%.2f and %.2f",r1,r2);
        break;
        case 2:
        switch(pm)
        {
         case 1:
          r1=r2=-b/(2*a);
          imag=sqrt(-d)/(2*a);
          printf("Imaginary Roots:%.2f+i%.2f and %.2f+%.2f",r1,imag,r2,imag);
          break;
          case 2:
        r1=r2=-b/(2*a);
        printf("Real and Equal Roots:%.2f and %.2f",r1,r2);
          break;
        }
        break;
    }
    return 0;
}