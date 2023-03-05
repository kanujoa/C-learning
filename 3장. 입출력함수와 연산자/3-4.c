#include <stdio.h>
// #pragma warning(disable:4996)     --> 권장하지 않는 함수 사용에 대한 경고 메시지 무시

void main() {
  int a;     // 정수형 변수 a 정의
  float b;     // 실수형 변수 b 정의
  char c;     // 문자형 변수 c 정의
  char d[20];     // 배열 d 정의

  printf("정수와 실수를 차례로 입력 : ");     // 입력창에 나타날 문구
  scanf("%d %f", &a, &b);     // 정수와 실수를 차례로 입력(띄어쓰기로 구분)받아 변수 a, b에 저장 (& 적는 것 잊지 않기!)
  printf("a = %d, b = %10.4f 또는 b = %e \n\n", a, b);     // %e에 의해 마지막 b는 지수 형태로 출력된다. (e가 들어감.)

  printf("문자를 입력 : ");  
  scanf(" %c", &c);     // 문자를 입력받아 변수 c에 저장 (앞에서의 scanf()를 입력할 때 누른 Enter를 무시하기 위해 %c 앞에 공백을 넣어야 한다.)
  printf("c = %c \n\n", c);

  printf("문자열을 입력 : ");
  scanf("%s", &d);     // 문자열을 입력받아 배열 d에 저장
  printf("d[] = %s", d);
}