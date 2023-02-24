#include <stdio.h>
void main() {
  enum day1 {SUN, MON, TUE, WED, THU, FRI, SAT} d1;     // 첫번째 열거자의 값 0 (디폴트)
  enum day2 {sun = 2, mon, tue, wed, thu, fri, sat} d2;     // 초깃값 2로 설정
  d1 = WED;     // 열거자 WED 저장
  d2 = wed;     // 열거자 wed 저장
  printf("열거형 d1에 저장된 값은 %d 입니다. \n", d1);     // WED의 값이 나옴.
  printf("열거형 d2에 저장된 값은 %d 입니다.", d2);     // wed의 값이 나옴.
}