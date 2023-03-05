#include <stdio.h>

void main() {
  char ch;
  printf("문자 하나를 입력하세요. : ");
  ch = getchar();     // 한 개의 문자가 입력되면 문자형 변수 ch에 저장된다.
  printf("ch = %c", ch);
}