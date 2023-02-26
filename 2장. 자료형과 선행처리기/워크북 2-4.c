#include <stdio.h>     // 표준함수인 scanf()와 printf()를 사용하기 위한 파일 포함
#include <conio.h>     // 표준함수인 getch()를 사용하기 위한 파일 포함
#include "factorial.h"     // 사용자 정의 파일인 factorial.h를 포함

void main() {
  int x;
  scanf("%d", &x);
  printf("%d! = %d", x, factorial(x));
  getch();     // 사용자에게 키보드로 하나의 키를 입력받는 함수
}

// ex) 3을 입력하면 3! = 6 의 결과가 나온다.
// 결과가 나온 후 아무 키를 입력하면 exit된다.