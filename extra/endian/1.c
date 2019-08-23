#include "stdio.h"

int main()
{
    int i = 1;
    char *p = (char *)&i;
    printf("%d\n", *p);

    if (*p == 1)
    {
        printf("Little Endian");
    }
    else
    {
        printf("Big Endian");
    }
    return 0;
}