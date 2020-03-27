#include <stdio.h>
int main()
{
int i;
int rev[6];
for(i=0;i<6;i++)
{
  scanf("%d ",&rev[i]);
}
printf("array elements after reverse :");
for(i=5;i>=0;i--)
{  
printf("%d ",rev[i]);
}
    return 0;
}