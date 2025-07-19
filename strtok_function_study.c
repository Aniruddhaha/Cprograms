//NOW we are going to study about the strtok()
/*
1. It is a part of string.h library function
2. strtok() is a standard C library function used to split(tokenize) a String into parts, based on a given delimiter (like space, commaetc.)
3. syntax for strtok() is that :-
    char *strtok(char *str,const char *delim)
    note: - return the pointer next to the token
    note: - strtok(NULL,",") keep getting the next tokens 
    actually "," is replaces with "\0"

*/

#include<stdio.h>
#include<string.h>
int main()
{

    char text[]="Aniruddha,Gopal,Jyotsna";
    char *token=strtok(text,",");
    while(token!=NULL)
    {
        
        printf("%s\n\n",token);
        token=strtok(NULL,",");
    }

    return 0;
}