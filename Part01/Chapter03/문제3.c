#include <stdio.h>

int main()
{
    int num;
    int result;

    printf("수 입력 : ");
    scanf("%d", &num);

    result = num * num;

    printf("%d의 제곱 = %d", num, result);
    return 0;
}
