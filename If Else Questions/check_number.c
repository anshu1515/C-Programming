#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n>0)
{
  printf("positive number:%d",n);
}
else if(n<0)
{
  printf("negative number:%d",n);
}
else
{
  printf("number is zero");
}
    return 0;
}