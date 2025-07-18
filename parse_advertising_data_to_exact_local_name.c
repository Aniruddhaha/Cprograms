//the code we are going to write it parses BLE advertisement packets and extracts the device name if exists
/*
we need to consider the BLE packet structure "[length][type][data]"
our code iterates through the advertisement buffer and identifies the fields of their types(e.g. 0x09="complete local name")
extract and prits the device name if found

*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>
#include<stdint.h>
void parse_adv(uint8_t *adv,int len)
{
    size_t i=0;//start with the first index 
    while(i<len)//and loops over the advertisement buffer
    {
        uint8_t field_len=adv[i++];
        if(field_len==0 ||i+field_len>len) break;

        uint8_t type=adv[i++];
        if(type==0x09)
        {
            char copy[31]={0};
            int copy_len=field_len-1>30?field_len-1:30;
            memcpy(copy,adv,copy_len);
            printf("%s",copy);
        }
        i+=field_len-1;

    }
}
int main() 
{
    uint8_t adv[]={
        0x02, 0x01, 0x06,                         //  length is 0x02 means 2; 0x01 is the Flag[type]; [data]-->0x06
        0x08, 0x09, 'B','L','E','_','D','e','v'    // [length]=0x08 ; [type]=0x09(name);[data]Complete Local Name: "BLE_Dev"
    };

    size_t len=sizeof(adv);
    parse_adv(adv,len);
    return 0;

}