#include <stdio.h>
#define sub1(x, y) x - y     // ��ũ�� �Լ� ���� �� �Ű������� ��ȣ ��� �� ��.
#define sub2(x, y) ((x) - (y))     // �Ű������� ��ȣ �����.

void main() {
  int result1, result2;
  result1 = sub1(1 + 2, 3 + 4);     // result1 = 1 + 2 - 3 + 4 (= 4)     --> ������� ���!
  result2 = sub2((1 + 2), (3 + 4));     // result2 = (1 + 2) - (3 + 4) (= -4)     --> ��ȣ���� ���!
  printf("result1 = %d \n", result1);
  printf("result2 = %d", result2);
}