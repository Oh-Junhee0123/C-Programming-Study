#include <stdio.h>

int main()
{
  int num = 0, cnt = 0;
  printf("배수의 갯수 : ");
  scanf("%d", &num);
  
  while(cnt++ < num)
    printf("%d ", 3*cnt);
  return 0;
}
