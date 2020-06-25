#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int result;

    printf("정수1 입력 : ");
    scanf("%d", &num1);
    printf("정수2 입력 : ");
    scanf("%d", &num2);
    printf("정수3 입력 : ");
    scanf("%d", &num3);

    result = (num1 - num2) * (num2 + num3) * (num3 % num1);
    
    printf("%d", result);
    return 0;
}