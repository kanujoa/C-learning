#include <stdio.h>
void main() {
  int i, sum;     // ���� i�� sum ����
  for (i = 1; i <= 10; i++)     // ���� i�� 1�� �ʱ�ȭ�ϰ� ���
    sum = sum + i;     // sum�� �ʱ�ȭ���� �ʰ� �׳� ���
  printf("1���� 10������ �� = %d \n", sum);
}