#include <stdio.h>

void main() {
  char s1[] = "C";     // 배열 s1 선언, 문자 "C" 할당
  char s2[] = "Programming";      // 배열 s2 선언, 문자열 "Programming" 할당
  
  puts(s1);     // puts() 함수를 사용하면 자동으로 서로 다른 줄에 출력되게 된다.
  puts(s2);

  putchar('\n');

  printf(s1);     // printf() 함수를 사용하면 개행문자를 따로 써주지 않으면 옆으로 연속으로 붙어서 출력된다.
  printf(s2);
}