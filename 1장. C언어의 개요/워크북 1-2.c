/* 화씨 온도를 섭씨 온도로 변환하는 프로그램 */
#include <stdio.h>     // 선행처리기
// 변환 상수 정의
#define FZ_PT 32.0     // 상수 정의
#define S_FACTOR (5.0/9.0)     // 상수 정의

void main() {     // main 함수 선언, 자료형(void)
  float fa, ce;     // float 자료형, 변수명 정의
  printf("Enter Fahrenheit temperature : ");    // 자료출력함수 prinf()
  scanf("%f", &fa);     // 자료입력함수 scanf() 
  ce = (fa - FZ_PT) * S_FACTOR;     // 수식
  printf("Celsius equivalent : %.1f\n", ce);
}
