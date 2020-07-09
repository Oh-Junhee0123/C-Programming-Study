include <stdio.h>

int main()
{
  int i, j;
  for(i = 0; i < 10; i++)
  {
    if(i % 2! = 0)
      continue;
      
    for(j = 1; j < 10; j++)
    {
      if(i < j)
        break;
      printf("%d × %d = %d \n", i, j, i*j);
    }
    printf("\n");
  }
  return 0;
}
