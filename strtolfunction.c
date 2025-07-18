// some important pointe on "strtol"-->"String to long"
/*
strtol-->"It is a dtandard C function that converts a string of characters into a number of type long"
Note:- parsing means taking one data of one format and converts it into another format 
1. strtol is mainly used for integer parsing
2. it is a part of strlib header file. I mean #include<strlib.h>
3. the functin definition is something like that---> long strtol(const char *nprt,char **endptr, int base)
    3.1. the "nptr" is a input string that you want to convert
    3.2. The "endptr" is a pointr to a pointer , which will be set to point to a character right after a number is read
    3.3. the base is the base of the number
    
4. one important point we should remember is that it only prints the valid part of the character that is valid in a particular base system (it clear my confusion that why we are using the end pointer )
5.

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str="a2b4c0d6saha";
    char *endstr;
    long value=strtol(str,&endstr,16);
    printf("%ld\n",value);
    printf("%s",endstr);

    return 0;
}