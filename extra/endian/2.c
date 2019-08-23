#include "stdio.h"
int main()
{
    union {
        int i;
        struct
        {
            char first;
            char second;
        } half;
    } number;
    number.i = 0x4241;
    printf("%c %c\n", number.half.first, number.half.second);
    number.half.first = 'a';
    number.half.second = 'b';
    printf("%x\n", number.i);
    return 0;
}