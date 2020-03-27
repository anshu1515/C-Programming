#include <stdio.h>
void passarr(int arr[5]);
int main()
{
    int marks[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    passarr(marks);
    return 0;
}
void passarr(int arr[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
}