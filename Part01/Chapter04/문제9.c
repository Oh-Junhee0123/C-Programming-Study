#include <stdio.h>

int main()
{
    int num = 3;

    num = num<<3;
    num = num>>2;

    printf("%d \n", num);
    return 0;
}