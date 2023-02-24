#include <stdio.h>
int a = 1;     // 전역변수 a
void func() {
  int a = 2;     // 함수 func()의 지역변수 a
  printf("func() 에서의 a의 값 => %d \n", a);     // func()의 지역변수 a의 값 출력 (함수 안에서는 그 함수 안에서의 지역변수가 우선!)
}

int main() {
  printf("main() 에서의 a의 값 => %d \n", a);     // 전역변수 a의 값 출력 (main() 함수에서는 지역변수 a가 없으므로)
  func();     // 터미널 창에서는 main 함수에 작성한 내용이 실행되어 보여지므로 func()를 또 작성해 주어야 한다. (main 함수가 c 프로그램을 짤 때 꼭 필요한 이유!)
}