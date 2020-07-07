#include <stdio.h>

int main()
{
  int start, end;
  int result;
  
  printf("시작과 끝 입력 : ");
  scanf("%d %d", &start, &end);
  
  for(result = 0; start <= end; start++)
    result += start;
    
  printf("합계 : %d \n", result);
  return 0;
}
