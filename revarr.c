#include<stdio.h>
#include<string.h>
void print_in_reverse(char *str)
{   
        int len=strlen(str);
    for(int i=len;i>=0;i--)
    {
         printf("%c\n\n",str[i]);
         
    }
}

int main()
{
    char arr[]="Aniruddha";
    int len=strlen(arr);
    for (int i=0;i<len;i++)
    {
        printf("%c\n\n",arr[i]);
    }
    printf("**********");
    print_in_reverse(arr);
    return 0;
}