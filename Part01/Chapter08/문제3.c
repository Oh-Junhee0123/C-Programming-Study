#include <stdio.h>

int main()
{
  int kor, eng, math;
  double avr;
  printf("국어, 영어, 수학의 성적 입력 : ");
  scanf("%d %d %d", &kor, &eng, &math);
  avr = (kor + eng + math)/3.0;
  printf("---평균 : %f --- \n", avr);
  
  if(avg>=90.0)
    printf("A! \n");
    
  else if(avg>=80.0)
    printf("B! \n");
    
  else if(avg>=70.0)
    printf("C! \n");
    
  else if(avg>=50.0)
    printf("D! \n");
    
  else 
    printf("F! \n");

  return 0;
}
