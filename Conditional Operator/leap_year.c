#include <stdio.h>
int main()
{
int year;
scanf("%d",&year);
(year%4==0&&year%100!=0)?printf("leap year"):(year%400==0)?printf("leap year"):printf("not leap year");
    return 0;
}