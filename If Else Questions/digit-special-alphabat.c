#include <stdio.h>
int main()
{
char c;
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
  printf("Alphabet:%c",c);
}
else if(c>='0'&&c<='9')
{
  printf("Digit:%c",c);
}
else
{
printf("Special Character");
}
    return 0;
}