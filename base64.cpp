#include <iostream>
#include <cstring>
#include <cstdio>


int main()
{
    
    const char* mapping = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    /* created the input for encode*/
    char input[100]="ali";

    int memory {0};
    int counter {0};
    for (int i{0}; i<strlen(input) ;i++)
    {
        /*this here loop select the one bit*/
        char c = input[i];
        for (int j{0};j<8;j++)
        {
           char this_bit;
           this_bit = (c & 128) >> 7;
           memory <<= 1;
           memory = memory | this_bit;
           counter ++ ;
           c  <<=1;
           if (counter == 6 )
           {
               printf("%c ",mapping[memory]);
               memory = 0;
               counter = 0;
           }
        }
    }
    std::cout<<'\n';
    return 0;
}

