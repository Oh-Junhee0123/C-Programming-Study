<h1 align = "center">C-Programming-Study</h1>
<br>

> ## Part01_C언어의 기본
### Chapter01_이것이 C언어다
* 프로그래밍 언어란 사람과 컴파일러가 이해할 수 있는 약속된 형태의 언어를 의미한다.
* 컴파일러는 프로그래밍 언어로 작성한 프로그램을 컴퓨터가 이해할 수 있도록 기계어로 번역하는 역할을 한다.
* C언어의 역사와 특징
  * C언어는 1971년경에 UNIX라는 운영체제의 개발을 위해 데니스 리치(Dennis Ritchie)와 켄 톤슨(Ken Thompson)이 함께 설계한 범용적인 고급(high-level) 언어이다.
* C언어의 역사와 특징
  * 절차지향적 특성을 지닌다. 때문에 익숙해지는데 오랜 시간이 걸리지 않는다.
  * 이식성이 좋다.
  * 좋은 성능을 보인다.
* 실행파일을 얻기 위한 과정
  * 첫 번째 단계 : 프로그램의 작성
  * 두 번째 단계 : 작성한 프로그램의 컴파일
  * 세 번째 단계 : 컴파일 된 결과물의 링크

### Chapter02_프로그램의 기본구성
* C언어는 함수로 시작해서 함수로 끝난다.
* 3x + 4 = y
  * x의 값을 입력, y를 출력이라고 한다.
  * 적절한 입력과 그에 따른 출력이 존재하는 것을 가리켜 함수(function)이라고 한다.
* 함수와 관련된 용어
  * 함수의 정의 : 만들어진 함수, 실행이 가능한 함수
  * 함수의 호출 : 함수의 실행을 명령하는 행위
  * 인자의 전달 : 함수의 실행을 명령할 때 전달하는 입력 값
* 정해진 순서에 의해서 진행되는 함수의 호출이 바로 프로그램의 호출이 되는 것이다.
* main 함수
  * int : 출력형태
  * main : 함수이름
  * (void) : 입력형태
<pre>
<code>
int main(void) //출력의 형태가 int이고 입력의 형태가 void인 main이라는 이름의 함수
</code>
</pre>
* 함수는 기능을 지녀야 한다.
  * 3x + 4라는 함수도 '입력 값에 3을 곱하고 결과에 4를 더한다.' 라는 기능을 지니고 있다. 그리고 C언어에서 그 기능을 중괄호 안에 표현이 된다.
* 함수의 몸체(body)
  * 함수의 기능을 정의하고 있는 영역을 가리켜 '함수의 몸체(body)' 라고 한다.
<pre>
<code>
int main(void)
{
 //함수의 몸체
}
</code>
</pre>

* 함수 내에 존재하는 문장의 끝에는 세미콜론 문자(;)를 붙여준다.
<pre>
<code>
int main(void)
{
 printf("Hello world! \n");
 return 0;
}
</code>
</pre>

* 헤더파일 선언
  * stdio.h에는 printf 함수의 호출에 필요한 정보가 존재한다.
  * 헤더파일의 선언은 소스파일의 맨 앞부분, main 함수 정의 이전에 와야 한다.
* return문
  * 함수를 호출한 영역으로 값을 전달(반환)
  * 현재 실행중인 함수의 종료
  
### Chapter03_변수와 연산자
* 변수
  * 값을 저장할 수 있는 메모리 공간에 붙은 이름, 혹은 메모리 공간 자체를 가리켜 변수라 한다.
  * int : 정수의 저장이 가능한 메모리 공간을 할당한다.
  * num : 메모리 공간의 이름을 num이라고 한다.
<pre>
<code>
int main(void)
{
 int num; //num이라는 이름의 변수 선언 
}
</code>
</pre>

<pre>
<code>
int main(void)
{
 int num; //num이라는 이름의 변수선언
 num = 20; //변수 num에 20 저장
 printf("%d", num); //변수 num의 값 참조
}
</code>
</pre>

* 선언과 동시에 초기화
<pre>
<code>
int main(void)
{
 int num1, num2;
 int num3 = 30, num4 = 40;
}
</code>
</pre>

* 변수를 선언만 하고 초기화하지 않으면 쓰레기 값이 저장된다.

* 대입 연산자
<pre>
<code>
num = 20; //연산자 오른쪽에 있는 값을 연산자 왼쪽에 있는 변수에 대입한다.
</code>
</pre>

<pre>
<code>
num = 4 + 3; //두 피연산자의 값을 더한다.
</code>
</pre>

<pre>
<code>
num = 4 - 3; //왼쪽의 피연산자 값에서 오른쪽의 피연산자 값을 뺀다.
</code>
</pre>

<pre>
<code>
num = 7 / 3; //왼쪽의 피연산자 값을 오른쪽의 피연산자 값으로 나눈다.
</code>
</pre>

<pre>
<code>
num = 7 % 3; //왼쪽의 피연산자 값을 오른쪽의 피연산자 값으로 나눴을 때 얻게 되는 나머지를 반환한다.
</code>
</pre>

* 증가, 감소 연산자
<pre>
<code>
val = ++num; //값을 1 증가 후, 속한 문장의 나머지를 진행(선 증가, 후 연산)
</code>
</pre>

<pre>
<code>
val = num++; //속한 문장을 먼저 진행한 후, 값을 1 증가(선 연산, 후 증가)
</code>
</pre>

<pre>
<code>
val = --num; //값을 1 감소 후, 속한 문장의 나머지를 진행(선 감소, 후 연산)
</code>
</pre>

<pre>
<code>
val = num--; //속한 문장을 먼저 진행한 후, 값을 1 감소(선 연산, 후 감소)
</code>
</pre>

* 조건 연산자
  * 조건을 만족하면 1을, 만족하지 않으면 0을 반환한다.
<pre>
<code>
n1 < n2 //n1이 n2보다 작은가?
</code>
</pre>

<pre>
<code>
n1 > n2 //n1이 n2보다 큰가?
</code>
</pre>

<pre>
<code>
n1 == n2 //n1과 n2가 같은가?
</code>
</pre>

<pre>
<code>
n1 != n2 //n1과 n2가 다른가?
</code>
</pre>

<pre>
<code>
n1 <= n2 //n1이 n2보다 같거나 작은가?
</code>
</pre>

<pre>
<code>
n1 >= n2 //n1이 n2보다 같거나 큰가?
</code>
</pre>

* 논리 
<pre>
<code>
A && B //A와 B 모두 '참'이면 연산결과로 '참'을 반환(논리 AND)
</code>
</pre>

<pre>
<code>
A || B //A와 B 둘 중 하나라도 '참'이면 연산결과로 '참'을 반환(논리 OR) 
</code>
</pre>

<pre>
<code>
!A //A가 '참'이면 '거짓', A가 '거짓'이면 '참'을 반환(논리 NOT)
</code>
</pre>

* 콤마 연산자
  * 둘 이상의 변수를 동시에 선언하거나, 둘 이상의 문장을 한 행에 삽입하는 경우에 사용되는 연산자이다.
  
* 키보드로부터 정수입력을 위한 scanf 함수의 호출
<pre>
<code>
int main(void)
{
 int num;
 scanf("%d", &num); //키보드로 입력된 정수를 변수 num에 저장한다.
}
</code>
</pre>

### Chapter04_데이터 표현방식의 이해
* 컴퓨터가 데이터를 표현하는 방식
  * 2진수
    * 두 개의 기호를 이용해서 데이터를 표현하는 방식을 가리켜 2진수라 한다.
  * 10진수
    * 열 개의 기호를 이용해서 데이터를 표현하는 방식을 가리켜 10진수라 한다.
  * 16진수
    * 16개의 기호를 이용해서 데이터를 표현하는 방식을 가리켜 16진수라 한다.
* 비트(Bit)와 바이트(Byte)
  * 비트(Bit)
    * 비트(Bit)는 컴퓨터가 표현하는 데이터의 최소단위로서 2진수 값 하나를 저장할 수 있는 메모리의 크기를 뜻하는 단위이다.
  * 바이트(Byte)
    * 비트를 여덟 개 묶으면 바이트라는 단위가 구성된다.
* 비트 연산자
<pre>
<code>
num1 & num2; //비트단위로 AND 연산을 한다.
</code>
</pre>

<pre>
<code>
num1 | num2; //비트단위로 OR 연산을 한다.
</code>
</pre>

<pre>
<code>
num1 ^ num2; //비트단위로 XOR 연산을 한다.
</code>
</pre>

<pre>
<code>
~ num; //단항 연산자로서 피연산자의 모든 비트를 반전시킨다.
</code>
</pre>

<pre>
<code>
num << 2; //피연산자의 비트 열을 왼쪽으로 이동시킨다.
</code>
</pre>

<pre>
<code>
num >> 2; //피연산자의 비트 열을 오른쪽으로 이동시킨다.
</code>
</pre>

### Chapter05_상수와 기본 자료형
* 자료형
  * 데이터를 표현하는 방법이다.
* 기본 자료형의 종류
  * 정수형
    * char : 1바이트
    * short : 2바이트
    * int : 4바이트
    * long : 4바이트
    * long long : 8바이트
  * 실수형
    * float : 4바이트
    * double : 8바이트
    * long double : 8바이트 이상
* sizeof 연산자
  * 자료형의 크기를 확인할 수 있다.
<pre>
<code>
int main(void)
{
 int num = 10;
 int sz1 = sizeof(num);
 int sz2 = sizeof(int);
}
</code>
</pre>

* 형 변환 연산자
<pre>
<code>
int main(void)
{
 int num1 = 3;
 double num2 = 2.5 * (double)num1;
}
</code>
</pre>

### Chapter06_printf 함수와 scanf 함수 정리하기
* printf 함수
  * 문자열을 출력하는 함수이다.
* scanf 함수
  * scanf 함수는 printf 함수의 상대적인 기능을 지닌다.
  * printf 함수는 출력에 사용되지만, scanf 함수는 입력에 사용된다.
  
### Chapter07_반복실행을 명령하는 반복문
* 반복문
  * while문
  * do~while문
  * for문 
* while문
  * 특정조건을 주고 그 조건을 만족하는 동안, 특정영역을 계속해서 반복하는 구조이다.
<pre>
<code>
while(num<3) //반복의 조건은 num < 3
{
 printf("Hello world! \n");
 num++;
}
</code>
</pre>

* do~while문
  * while문과 달리 반복조건을 뒷부분에서 검사한다.
<pre>
<code>
do
{
 printf("Hello world! \n");
 num++;
}
while(num < 3);
</code>
</pre>

* for문
  * 반복문 중에서 가장 많이 사용된다.
  * 반복을 위한 변수의 선언과 반복조건을 거짓으로 만들기 위한 값의 증가 및 감소연산 등을 한데 묶을 수 있도록 만들어진 반복문이다.
<pre>
<code>
int main(void)
{
 for(int num = 0; num < 3; num++)
 {
  printf("Hi~");
 }
}
</code>
</pre>

### Chapter08_조건에 따른 흐름의 분기
* if문을 이용한 조건적 실행
<pre>
<code>
if(num1 > num2) //num1이 num2보다 크다면 실행한다.
{
 printf("num1이 num2보다 큽니다. \n");
 printf("%d > %d \n", num1, num2);
}
</code>
</pre>

* if ~else문을 이용한 흐름의 분기
<pre>
<code>
if(num1>num2)
{ // if 블록
 printf("num1이 num2보다 큽니다. \n");
 printf("%d > %d \n", num1, num2);
}
else //num1>num2이 '거짓'이면 아래의 else 블록을 실행한다.
{ // else 블록
 printf("num1이 num2보다 크지 않습니다. \n");
 printf("%d <= %d \n", num1, num2);
}
</code>
</pre>

* 반복문의 탈출
  * break문을 사용한다.
  
### Chapter09_C언어의 핵심! 함수!
* 지역변수
  * 함수 내에만 존재 및 접근 가능하다.
* 전역변수
  * 어디서든 접근이 가능한 변수로써 지역변수와 달리 중괄호 내에 선언되지 않는다.
<br>

> ## Part02_포인터와 배열의 시작
### Chapter11_1차원 배열
### Chapter12_포인터의 이해
### Chapter13_포인터와 배열! 함께 이해하기
### Chapter14_포인터와 함수에 대한 이해
