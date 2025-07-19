//now we are going a new function that strchr()-->String Character it is a standard C library that is used to find the first occurance of a character in a string 
/*
1. It is a part of Sting.h library 
2.Syntax of strchr(): - char *strchr(const char *str, int t)
        where str is the pointer to the null terminated string to be search in
        t is the character to find actually it is treated as char but passed as int 

3. what it return is pointer to the first occurance of the character 't' the string 
        return null if character is not found
4.Pointer Arithmetic:
ptr-str
    * ptr points to str[8].
    * str points to str[0].
In C, subtracting two pointers to element of the same array gives the number of elements between them.
note: - gives the number of elements between them

ptr-str= 8-0 = 8
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Aniruddha Saha";
    char *ptr=strchr(str,'a');
    if(ptr!=NULL)
    {
        printf("the 'a' found in position %d\n\n",ptr-str);
        printf("%s",ptr);
    }
    else printf("no tfound");
    return 0;
}