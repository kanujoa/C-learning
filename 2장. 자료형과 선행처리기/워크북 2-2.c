#include <stdio.h>
#define AGE 28     // 매크로 이용해 정수형 상수 정의
#define PI 3.141592     // 매크로 이용해 실수형 상수 정의
#define NAME "홍길동"     // 매크로를 이용한 문자열 상수 정의

const int a = 10;     // const를 이용한 정수형 상수 정의
const float b = 10.56789;     // const를 이용한 실수형 상수 정의
const char c = 'K';     // const를 이용한 문자형 상수 정의
const char* MYHOME = "경기도";     // const를 이용한 문자열 상수 정의

void main() 
{
  int i = 21;     // 정수형 변수 정의
  float j = 4.0;     // 실수형 변수 정의
  char k = 'A';     // 문자형 변수 정의
  char ch[10] = "홍길동";     // 문자열 변수 정의(배열변수 이용)
  char *p = "컴퓨터과학과";     // 문자열 변수 정의(포인트변수 이용)

  printf("집수소는 : %s 이름은 : %s 나이는 : %d \n\n", MYHOME, NAME, i);     // 상숫값을 출력
  printf("%s %s 나이 : %d 학점 : %c 평점 : %f\n", p, ch, i, k, j);     // 변숫값을 출력
}