#include <stdio.h>

#define MAX(x, y) x > y ? x : y     // �ִ��� ���ϴ� ��ũ�� �Լ� MAX(x, y) ����
#define MIN(x, y) x < y ? x : y     // �ּڰ��� ���ϴ� ��ũ�� �Լ� MIN(x, y) ����

void main() 
{
  printf("�ִ� : %d \n", MAX(10, 20));     // MAX(10, 20)�� 10 > 20 ? 10 : 20���� ġȯ��.
  printf("�ּڰ� : %d \n", MIN(10, 20));     // MIN(10, 20)�� 10 < 20 ? 20 : 10���� ġȯ��.
}