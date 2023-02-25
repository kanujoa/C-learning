#include <stdio.h>
#define STATE 0    // 프로그램에서 0은 false, 0 이외의 숫자는 true이다.

void main() {
  #if STATE     // 0이니까 조건이 거짓! 따라서 삭제하여 없는 것으로 취급
    printf("A 프로그램을 컴파일");
  #else     // 위의 것이 거짓이므로 #else의 명령문이 코드로 생성되어 컴파일되게 된다.
    printf("B 프로그램을 컴파일");
  #endif
}