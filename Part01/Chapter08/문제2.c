#include <stdio.h>

int main()
{
  int num1, num2;
  int result;
  printf("두 개의 정수 입력 : ");
  scanf("%d %d", &num1, &num2);
  
  if(num1 < num2)
    result = num2 - num1;
  else
    result = num1 - num2;
    
  printf("뺄셈 결과 : %d \n", reuslt);
  return 0;
}
