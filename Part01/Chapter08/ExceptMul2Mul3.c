include <stdio.h>

int main()
{
  int num;
  printf("start! ");
  
  for(num = 1; num < 20; num++)
  {
    if(num % 2 == 0 || num % 3 == 0)
      continue;
  }
  printf("%d ", num);
  return 0;
}
