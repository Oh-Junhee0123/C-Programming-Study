#include <stdio.h>

int main()
{
    int asc;
    printf("숫자 입력 : ");
    scnaf("%d", &asc);
    printf("아스키 문자 : %c \n", asc);
    return 0;
}