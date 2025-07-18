//Here I'm going to start the concepts of array from basic to the extreme advance
#include<stdio.h>
int main()
{
    int a[5];//that is a command to create an array
    a[0]=10;
    a[1]=11;
    a[2]=12;
    a[3]=13;
    a[4]=14;
    /*a[5]=15;//it is a error lets check what happends when we compile it (the shocking part is that no error when I compile that )
    // now its printing time for array
    the biggest fun part is that when we run the code what we got is 
    10,11,12,13,14,15,5(this 5 is some garbage value)
    */
    for(int i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}