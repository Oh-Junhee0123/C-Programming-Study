#include <stdio.h>

int main()
{
  int num;
  int i = 0;
  
  printf("양의 정수 입력 : ");
  scanf("%d", &num);
  
  while(i < num)
  {
    printf("Hello world! \n");
    i++;
  }
  return 0;
}
