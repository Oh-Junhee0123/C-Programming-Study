#include <stdio.h>

int main()
{
    double num1, num2;
    printf("num1 입력 : ");
    scanf("lf", &num1);
    printf("num2 입력 : ");
    scanf("lf", &num2);

    printf("두 수의 덧셈 : %lf \n", num1 + num2);
    printf("두 수의 뺄셈 : %lf \n", num1 - num2);
    printf("두 수의 곱셈 : %lf \n", num1 * num2);
    printf("두 수의 나눗셈 : %lf \n", num1 / num2);
    return 0;
}