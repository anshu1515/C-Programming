#include <stdio.h>
#include<math.h>
int main()
{
int p,t;
float r,ci;
scanf("%d %f %d",&p,&r,&t);
ci=p*pow((1+r/100),t);
printf("compound interest:%.2f",ci);
    return 0;
}