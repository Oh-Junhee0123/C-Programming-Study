#include <stdio.h>

int main()
{
  int sum = 0, num = 0;
  
  while(1)
  {
    sum += num;
    if(num > 5000)
      break;
    num++;
  }
  
  printf("sum : %d \n", sum);
  printf("num : %d \n", num);
  return 0;
}
