#include <stdio.h>
void main() {
  short int num1, num2;
  num1 = 32767 + 2;     // short int형의 최댓값에서 벗어남.
  num2 = -32768 - 2;     // short int형의 최솟값에서 벗어남.
  printf("num1 = %d \n", num1);
  printf("num2 = %d", num2);
}