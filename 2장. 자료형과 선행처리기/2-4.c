#include <stdio.h>
void main() {
  char ch;     // ������ ���� ch ����
  int in;     // ������ ���� ch ����
  ch = in = 'A';     // �����δ� 'A'�� ASCII �ڵ尪�� 65 ����
  printf("ch = %d \n", ch);     // ch�� ����� ���� 65�� ���
  printf("in = %d \n", in);     // in�� ����� ���� 65�� ���
  printf("------ \n");
  ch = in = 100;
  printf("ch = %c \n", ch);     // ch�� ����� ���� 100�� ASCII ���ڷ� ��� (d)
  printf("in = %c \n", in);     // in�� ����� ���� 100�� ASCII ���ڷ� ��� (d)
}