//the function pointer 2 addition of two numbers using function pointer
#include<stdio.h>
int add(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int (*fp)(int a,int b)=add;
    printf("%d",add(4,5));
}