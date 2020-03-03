#include <stdio.h>
int main()
{
char c;
scanf("%c",&c);
if(c>='a'&&c<='z')
{
  printf("lower case:%c",c);
}
else if(c>='A'&&c<='Z')
{
  printf("UPPER CASE:%c",c);
}
else
{
printf("special character");
}
    return 0;
}