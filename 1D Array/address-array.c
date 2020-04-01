#include <stdio.h>
int main()
{
int marks[5]={10,20,30,40};
printf("%p\n %p\n %p\n",marks,&marks[0],&marks);
printf("%p\n %p\n %p",marks+1,&marks[0]+1,&marks+1);
    return 0;
}