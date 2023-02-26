#include <stdio.h>
#define SIZE 100     // 매크로 상수 SIZE를 100으로 정의

#if defined SIZE     // 매크로 상수 SIZE의 정의 여부를 확인 (여기서는 true이다.)
#undef SIZE     // 매크로 상수 SIZE의 정의 해제
#define SIZE 200     // 매크로 상수 SIZE를 200으로 정의 (실제 컴파일되는 프로그램은 아래 #else에 해당하는 부분이 아닌 #if에 해당하는 부분뿐이다.)
#else
#define SIZE 300     // 매크로 상수 SIZE가 정의되지 않았으면 300으로 정의
#endif     // 매크로 조건문은 반드시 #endif로 종료해야 한다.

void main() {
  printf("SIZE : %d \n", SIZE);
}