#include <stdio.h>     // ǥ���Լ��� scanf()�� printf()�� ����ϱ� ���� ���� ����
#include <conio.h>     // ǥ���Լ��� getch()�� ����ϱ� ���� ���� ����
#include "factorial.h"     // ����� ���� ������ factorial.h�� ����

void main() {
  int x;
  scanf("%d", &x);
  printf("%d! = %d", x, factorial(x));
  getch();     // ����ڿ��� Ű����� �ϳ��� Ű�� �Է¹޴� �Լ�
}

// ex) 3�� �Է��ϸ� 3! = 6 �� ����� ���´�.
// ����� ���� �� �ƹ� Ű�� �Է��ϸ� exit�ȴ�.