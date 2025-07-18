#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void parse_uuid128(char *uuid, uint8_t *u)
{
    char *p=uuid;
    int id=0;
    while(*p && id<16)
    {
        if(isxdigit(*p))
        {
            u[id++]=strtol(p,(char**)&p,16);

        }
        else 
        p++;
    }
}
int main()
{   
    char *uuid="240d5183-819a-4627-9ca9-1aa24df29f18";
    uint8_t u[16];
    parse_uuid128(uuid,u);
    for(int i=0;i<16;i++) printf("%d  ",u[i]);



    return 0;
}