#include <stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int copy1[n];
int copy2[n];
for(i=0;i<n;i++)
{
    scanf("%d",&copy1[i]);
}
for(i=0;i<n;i++)
{
    copy2[i]=copy1[i];
}
printf("list 1:");
for(i=0;i<n;i++)
{
  printf("%d ",copy1[i]);
}
printf("\nlist 2:");
for(i=0;i<n;i++)
{
printf("%d ",copy2[i]);
}
    return 0;
}