#include <stdio.h>
#define PI 3.141592     // 매크로 정의를 이용한 상수 정의
const int K = 10;     // const를 이용한 상수 정의

void main() 
{
  double a;     // 실수형 변수 a 선언 (배정밀도 부동 소수점(64비트) 방식으로 저장되는 double형)
  a = K + PI;
  // K = 20;     --> 상수는 변하는 값이 아니므로 값을 변화시키면 에러 발생
  printf("%f", a);  

  int x;     // 정수형 변수 x 선언
  int y;     // 정수형 변수 y 선언
  int z;     // 정수형 변수 z 선언

  x = 10;      // 선언된 변수 x에 값 할당
  y = 20;     // 선언된 변수 y에 값 할당
  z = x + y;     // x, y에 할당된 값 이용해 z에 값 할당
  printf("%d\n", z);
}