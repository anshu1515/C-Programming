#include <stdio.h>
int search(int *a,int n,int x);
int main()
{
    int i,n,x,result;
    int a[100];
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  result=search(a,n,x);
  printf("%d",result);
    return 0;
}
int search(int *a,int n,int x)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==x)
        return i;
}