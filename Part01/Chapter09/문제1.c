#include <stdio.h>

int MaxNum(int n1, int n2, int n3)
{
  if(n1 > n2)
    return (n1 > n3) ? n1 : n3;
  else
    return (n2 > n3) ? n2 : n3;
}

int MinNum(int n1, int n2, int n3)
{
  if(n1 < n2)
    return (n1 < n3) ? n1 : n3;
  else
    return (n2 < n3) ? n2 : n3;
}

int main()
{
  int num1, num2, num3;
  printf("세 개의 정수 입력 : ");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("가장 큰 수 : %d \n", MaxNum(num1, num2, num3);
  printf("가장 작은 수 : %d \n", MinNum(num1, num2, num3);
  return 0;
}
