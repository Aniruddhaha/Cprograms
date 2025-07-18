// now we go forward in the topic of string array and then the same part in string pointer
#include<stdio.h>
void another_way_declare_string()
{
    //in that declaration you can't modify the string
    char *str="Aniruddha Saha";
    printf("%s",str);
}
int main()
{

    char str[]="Aniruddha";
    printf("%s",str);
    another_way_declare_string();

    return 0;
}