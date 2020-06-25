#include <stdio.h>

int main()
{
    int num1, num2;
    int result1, result2;

    printf("정수1 입력 : ");
    scanf("%d", &num1);
    printf("정수2 입력 : ");
    scanf("%d", &num2);

    result1 = num1 / num2;
    result2 = num1 % num2;

    printf("몫 = %d", result1);
    printf("나머지 = %d", result2);
    return 0;
}