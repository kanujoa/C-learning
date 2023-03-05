#include <stdio.h>

void main() {
  char s[50];      // 문자열 저장을 위해 배열명이 s인 배열 선언
  printf("문자열 입력 (gets() 결과 살펴보기) : ");
  gets(s);      // gets()를 이용해 문자열을 배열에 저장
  printf("gets()로 문자열 입력 = %s \n\n", s);
  
  printf("문자열 입력 (scanf() 결과 살펴보기) : ");
  scanf("%s", s);     // scanf()를 이용해 문자열을 배열에 저장
  printf("scanf()로 문자열 입력 = %s", s);
}