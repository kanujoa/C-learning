#include <stdio.h>
#define ADDRESS "경기도 OO시 XX구"     // 프로그램 내의 ADDRESS는 "경기도 OO시 XX구"로 치환된다.
#define TEL "1234-5678"     // 프로그램 내의 TEL은 "1234-5678"로 치환된다.
// 매크로 정의 시 세미콜론(;)을 사용하면 오류가 난다.

void main() {
  printf("집주소 : %s \n", ADDRESS);
  printf("전화번호 : %s", TEL);
}
