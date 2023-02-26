// 매크로 정의가 된 자신의 헤더 파일을 만들어서 사용하는 프로그램 (cal.h 보기)

#include "cal.h"     // 사용자 헤더 파일 cal.h에 stdio.h 파일을 포함시켰으므로 다시 포함해 줄 필요가 없다.

void main() {
  int add_result, sub_result;
  printf("10과 5를 더하면 %d이다. \n", ADD(10, 5));
  printf("10에서 5를 빼면 %d이다.", SUB(10, 5));
}