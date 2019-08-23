#include <stdio.h>
union {
    int i;
    char x[2];
} a;
int main()
{
    a.x[0] = 10;
    a.x[1] = 1;
    printf("%d", a.i);
    return 0;
}
