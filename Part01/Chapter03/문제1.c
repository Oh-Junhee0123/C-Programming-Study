#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int result1;
    int result2;

    printf("정수1 입력 : ");
    scanf("%d", &num1);
    printf("정수2 입력 : ");
    scanf("%d", &num2);

    result1 = num1 - num2;
    result2 = num1 * num2;

    printf("num1 - num2 = %d", result1);
    printf("num1 × num2 = %d", result2);
    return 0;
}
