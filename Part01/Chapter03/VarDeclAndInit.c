/*
제목 : 변수의 다양한 선언 및 초기화
기능 : 변수를 선언하고 다양한 형태로 초기화 
파일 이름 : VarDeclAndInit.c
작성날짜 : 2020. 06. 24.
수정날짜 : 2020. 06. 25.
작성자 : Oh-Junhee
*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    int num3 = 30, num4 = 40;

    printf("num1: %d, num2: %d \n", num1, num2);
    num1 = 10;
    num2 = 20;

    printf("num1: %d, num2: %d \n", num1, num2);
    printf("num3: %d, num4: %d \n", num3, num4);
    return 0;
}
