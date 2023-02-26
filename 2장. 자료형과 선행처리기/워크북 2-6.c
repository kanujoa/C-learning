#include <stdio.h>

#define MAX(x, y) x > y ? x : y     // 최댓값을 구하는 매크로 함수 MAX(x, y) 정의
#define MIN(x, y) x < y ? x : y     // 최솟값을 구하는 매크로 함수 MIN(x, y) 정의

void main() 
{
  printf("최댓값 : %d \n", MAX(10, 20));     // MAX(10, 20)이 10 > 20 ? 10 : 20으로 치환됨.
  printf("최솟값 : %d \n", MIN(10, 20));     // MIN(10, 20)이 10 < 20 ? 20 : 10으로 치환됨.
}