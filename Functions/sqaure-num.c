#include<stdio.h>
void isSquare(int n);
int main()
{
    int m;
    scanf("%d",&m);
    isSquare(m);
    return 0;
}
void isSquare(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
  {
    if(n==i*i)
    {
      count=1;
      break;
    }
  }
  if(count==1)
  {
    printf("yes");
  }
  else
    printf("no");
}