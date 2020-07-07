#include <stdio.h>

int main()
{
  int num, i;
  int result = 1;
  
  printf("정수 입력 : ");
  scanf("%d", &num);
  
  for(i = 1; i < num; i++)
    result = result * i;
    
  printf("%d! = %d \n", num, result);
  return 0;
}
