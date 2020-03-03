#include <stdio.h>
int main()
{
int py,cem,mat,com,bio,t;
float per;
scanf("%d %d %d %d %d",&py,&cem,&mat,&com,&bio);
t=py+cem+mat+com+bio;
per=(t*100)/500;
if(per>=90)
{
    printf("grade A");
}
else if(per>=80)
{
    printf("grade B");
}
else if(per>=70)
{
    printf("grade C");
}
else if(per>=60)
{
    printf("grade D");
}
else if(per>=40)
{
    printf("grade E");
}
else
{
  printf("grade F");
}
    return 0;
}