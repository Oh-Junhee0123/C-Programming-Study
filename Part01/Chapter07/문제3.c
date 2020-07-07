#include <stdio.h>

int main()
{
  int total = 0;
  int num = 1;
  
  while(num != 0)
  {
    printf("정수 입력(0 to quit) : ");
    scanf("%d", &num);
    total += num;
  }
  printf("입력된 정수의 총 합 : %d \n", total);
  return 0;
}
