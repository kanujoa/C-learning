#include <stdio.h>
#define sub1(x, y) x - y     // 매크로 함수 정의 시 매개변수에 괄호 사용 안 함.
#define sub2(x, y) ((x) - (y))     // 매개변수에 괄호 사용함.

void main() {
  int result1, result2;
  result1 = sub1(1 + 2, 3 + 4);     // result1 = 1 + 2 - 3 + 4 (= 4)     --> 순서대로 계산!
  result2 = sub2((1 + 2), (3 + 4));     // result2 = (1 + 2) - (3 + 4) (= -4)     --> 괄호부터 계산!
  printf("result1 = %d \n", result1);
  printf("result2 = %d", result2);
}