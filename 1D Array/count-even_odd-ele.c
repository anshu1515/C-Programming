#include <stdio.h>
int main()
{
int i;
int evenodd[10];
for(i=0;i<10;i++)
{
 scanf("%d",&evenodd[i]);
}
int even=0,odd=0;
for(i=1;i<=10;i++)
{
if(evenodd[i]%2==0)
{
    even=even+1;
}
else
{
  odd=odd+1;
}
}
printf("count of even :%d\n",even);
printf("count of odd :%d",odd);
 return 0;
}