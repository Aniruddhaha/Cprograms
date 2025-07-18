// now we go inside the memcpy function in details 
/*
what is memcpy() and which library is used for this function?
ans. memcpy is a standard c library function tha is used to copy the memory from one memory location to another location
copy the n bytes on memory from one memory locaton to another memory loaction
2. The structure of the memcpy():- void *memcpy(viod *dest, void *src,size_t n)
*dest->pointer to the destination buffer
*src->pointer to the source buffer
n->is the number of bytes to cpy


the most important part is that return value 
it returns pointer to the destination buffer
*/




#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stddef.h>
int main()
{
    char buffer[]="Aniruddha Saha";
    int len=strlen(buffer);
    char bufferrr[len];
    memcpy((void*)bufferrr,(void*)buffer,len);
    printf("%s",bufferrr);




    return 0;
}