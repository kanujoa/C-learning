#include <stdio.h>

void main() {
  char s[50];      // ���ڿ� ������ ���� �迭���� s�� �迭 ����
  printf("���ڿ� �Է� (gets() ��� ���캸��) : ");
  gets(s);      // gets()�� �̿��� ���ڿ��� �迭�� ����
  printf("gets()�� ���ڿ� �Է� = %s \n\n", s);
  
  printf("���ڿ� �Է� (scanf() ��� ���캸��) : ");
  scanf("%s", s);     // scanf()�� �̿��� ���ڿ��� �迭�� ����
  printf("scanf()�� ���ڿ� �Է� = %s", s);
}