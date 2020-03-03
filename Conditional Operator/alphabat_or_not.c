#include <stdio.h>
int main()
{
char c;
scanf("%c",&c);
((c>='a'&&c<='z')||(c>='A'&&c<='Z'))?printf("alphabat"):printf("not an alphabat");
    return 0;
}