//now we are going to study the memcmp() function it compares two block of memory byte by byte for a given number of bytes
/*
1. what is the function structure of memcmp() ?
ans. int memcmp(const void *ptr1,const void *ptr2,int num)
note:- const void means that void is a generic data type and const void means that points to a read only memory block
int num is the number of memory block you want to compare

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
void check_uuid(uint8_t *received_uuid)
{
    uint8_t known_uuid[16]={ 
        0x24, 0x0D, 0x51, 0x83, 0x81, 0x9A, 0x46, 0x27,
        0x9C, 0xA9, 0x1A, 0xA2, 0x4D, 0xF2, 0x9F, 0x18 
    };
    if(memcmp(received_uuid,known_uuid,16)==0)
    {
        printf("uuid mathched");
    }
    else printf("uuid not matched");
}

int main()
{
    uint8_t received_uuid[16]= { 
        0x24, 0x0D, 0x51, 0x83, 0x81, 0x9A, 0x46, 0x27,
        0x9C, 0xA9, 0x1A, 0xA2, 0x4D, 0xF2, 0x9F, 0x18 
    };
    check_uuid(received_uuid);



    return 0;
}