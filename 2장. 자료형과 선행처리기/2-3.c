#include <stdio.h>
void main() {
  char ch1;     // 문자형 변수 ch1 선언
  char ch2;     // 문자형 변수 ch2 선언
  ch1 = 0;     // 십진수 0 저장
  ch2 = '0';     // 문자 '0' 저장 (실제로는 ASCII 코드값인 48이 저장됨.)
  printf("ch1의 ASCII 코드값 = %d, ASCII 문자 = %c \n", ch1, ch1);     // ch1에 저장된 정수 0을 출력, ASCII 코드값 0은 null 문자 (아무것도 써져 있지 않음.)
  printf("ch2의 ASCII 코드값 = %d, ASCII 문자 = %c \n", ch2, ch2);     // ch2에 저장된 ASCII 문자 '0'을 출력 (실제로는 따옴표 없이 출력), ASCII 코드값 48 출력
}

// 십진수가 아닌 수는 ASCII 코드표에 따라 문자로 변환되어 변수에 저장되고 ASCII 코드값은 십진수, ASCII 문자값은 ASCII code표에서 그에 대응하는 문자가 된다.