// 원의 면적을 구하는 프로그램 (선행처리기 #define 사용하여 작성하기)
#include <stdio.h>
#define IN "원의 반지름은 100입니다. \n"
#define PI 3.1415926535     // 문자형으로 작성하면 AREA 함수 실행에서 오류가 나므로 int형으로 작성해야 한다.
#define AREA(X) (PI*(X)*(X))
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다.")

void main() {
  printf("%s \n", IN);
  printf("원의 면적은 %10.5f 입니다. \n\n", AREA(100));
  OUT;
}