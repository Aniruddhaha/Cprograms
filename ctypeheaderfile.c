#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char name[]="Aniruddha-Saha-24/06/2000";
    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
    if(isxdigit(name[i]))
    printf("%c--> it is a hex digit\n",name[i]);
    else 
    printf("%c--> it is not a hex digit\n",name[i]);
    }
}

// some Important comments on isxdigit
/*
the input what we call parameter in a isxdigit(*pointer )-->yes the parameter input to that should be a pointer
1. it only checks only one digit at a time so keep it in mind
2. it is a part of c library so always try to include ctype library . I mean #include<ctype.h>
*/