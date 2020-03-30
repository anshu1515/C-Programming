#include <stdio.h>
int main()
{
int i,j,size,count;
scanf("%d",&size);
int fr[100];
int ar[100];
for(i=0;i<size;i++)
{
    scanf("%d",&ar[i]);
    fr[i]=-1;
}
for(i=0;i<size;i++)
{
count=1;
for(j=i+1;j<size;j++)
{
    if(ar[i]==ar[j])
    {
        count++;
        fr[j]=0;
    }
}
if(fr[i]!=0)
{
    fr[i]=count;
}
}
for(i=0;i<size;i++)
{
    if(fr[i]!=0)
    {
    printf("%d : %d \n",ar[i],fr[i]);
    }
}
    return 0;
}