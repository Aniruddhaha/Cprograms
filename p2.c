//that is the start of the function pointer
#include<stdio.h>
void f1(void)
{
    printf("Hi Aniruddha");
}
int main()
{
    void (*function_pointer)(void);
    function_pointer=f1;
    function_pointer();
    return 0;
    
}