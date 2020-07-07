#include <stdio.h>

int main()
{
  int cur = 2;
  int is = 0;
  
  do
  {
    is = 1;
    do
    {
      printf("%d×%d=%d \n", cur, is, cur*is);
      is++;
    }
    while(is < 10);
    cur++;
    printf("\n");
  }
  while(cur < 10);
  return 0;
}
