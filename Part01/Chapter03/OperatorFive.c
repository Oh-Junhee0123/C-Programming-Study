#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = (num1--)+2;

    printtf("num1 : %d \n", num1);
    printtf("num2 : %d \n", num2);
    return 0;
}