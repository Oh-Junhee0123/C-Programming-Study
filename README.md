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
num = 20;
</code>
</pre>

<pre>
<code>
num = 4 + 3;
</code>
</pre>

<pre>
<code>
num = 4 - 3;
</code>
</pre>

<pre>
<code>
num = 7 / 3;
</code>
</pre>

<pre>
<code>
num = 7 % 3;
</code>
</pre>

* 증가, 감소 연산자
<pre>
<code>
val = ++num;
</code>
</pre>

<pre>
<code>
val = num++;
</code>
</pre>

<pre>
<code>
val = --num;
</code>
</pre>

<pre>
<code>
val = num--;
</code>
</pre>

* 조건 연산자
  * 조건을 만족하면 1을, 만족하지 않으면 0을 반환한다.
<pre>
<code>
n1 < n2
</code>
</pre>

<pre>
<code>
n1 > n2
</code>
</pre>

<pre>
<code>
n1 == n2
</code>
</pre>

<pre>
<code>
n1 != n2
</code>
</pre>

<pre>
<code>
n1 <= n2
</code>
</pre>

<pre>
<code>
n1 >= n2
</code>
</pre>

* 논리 
<pre>
<code>
A && B
</code>
</pre>

<pre>
<code>
A || B
</code>
</pre>

<pre>
<code>
!A
</code>
</pre>

* 콤마 연산자
  * 둘 이상의 변수를 동시에 선언하거나, 둘 이상의 문장을 한 행에 삽입하는 경우에 사용되는 연산자이다.

### Chapter04_데이터 표현방식의 이해
### Chapter05_상수와 기본 자료형
### Chapter06_printf 함수와 scanf 함수 정리하기
### Chapter07_반복실행을 명령하는 반복문
### Chapter08_조건에 따른 흐름의 분기
### Chapter09_C언어의 핵심! 함수!
<br>

> ## Part02_포인터와 배열의 시작
### Chapter11_1차원 배열
### Chapter12_포인터의 이해
