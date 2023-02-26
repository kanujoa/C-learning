#include <stdio.h>

void main() {
  long i, sum1 = 0;     // int형 변수 정의
  float sum2 = 0;      // 실수형 변수 정의 (float: 단정밀도 부동 소수점)
  double sum3 = 0;     // 실수형 변수 정의 (double: 배정밀도 부동 소수점)
  
  for (i=10000; i<=11000; i++) {
    sum1 += i;
    sum2 += i;
    sum3 += i;
  }
  printf("10,000 ~ 11,000의 합 (long) = %d\n", sum1);     // 21672     --> 전혀 계산을 못함. (overflow가 일어남.)
  printf("10,000 ~ 11,000의 합 (float) = %f\n", sum2);     // 1050099968.0000000     --> 약간의 오차를 포함
  printf("10,000 ~ 11,000의 합 (double) = %f\n", sum3);      // 1050105000.000000     --> 정확한 결과값을 계산
}

// VSCODE에서는 모두 정확한 결과값들이 나온다.