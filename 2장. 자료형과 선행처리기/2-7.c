#include <stdio.h>
void main() {
  short int num1, num2;
  num1 = 32767 + 2;     // short int���� �ִ񰪿��� ���.
  num2 = -32768 - 2;     // short int���� �ּڰ����� ���.
  printf("num1 = %d \n", num1);
  printf("num2 = %d", num2);
}