#include <stdio.h>
void main() {
  int num1 = 104;     // 정수형 변수 num1에 10진수 104저장
  int num2 = 0150;      // 정수형 변수 num2에 8진수 105 저장
  int num3 = 0x68;     // 정수형 변수 num3에 16진수 68 저장
  /* 아래에서는 각 변수에 저장된 정수가 10진수로 출력된다. */
  printf("num1에 저장된 정숫값은 : %d \n", num1);
  printf("num2에 저장된 정숫값은 : %d \n", num2);
  printf("num3에 저장된 정숫값은 : %d \n", num3);
}