#include<stdio.h>
#include<string.h>
int main()
{   
    char achar[]={'A','n','i','r','u','d','d','h','a','\0'};
    int len=strlen(achar);
    for(int i=0;i<len;i++)
    {
        printf("%c",achar[i]);
    }

    return 0;
}