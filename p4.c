// Passing function pointer as argument
//the basic syntax of function pointer is return typr (*pointer neme)(parameter list)=funnction name;
#include<stdio.h>
void operate(int a,int b,int (*fp)(int,int))
{
    fp(a,b);
}
int multiply(int a,int b)
{
    int c=0;
    c=a*b;
    return printf("%d",c);
}
int main()
{
    operate(5,6,multiply);

    return 0;
}