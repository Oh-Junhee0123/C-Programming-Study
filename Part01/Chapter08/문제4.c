#include <stdio.h>

int main()
{
  int num1, num2;
  int result;
  printf("두 개의 정수 입력 : ");
  scanf("%d %d", &num1, &num2);
  
  result = (num1 > num2) ? num2 - num1 : num2 - num1;
  printf("뺄셈 결과 : %d \n", result);
  return 0;
}
