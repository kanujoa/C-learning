#include <stdio.h>

void main() {
  char s1[] = "C";     // �迭 s1 ����, ���� "C" �Ҵ�
  char s2[] = "Programming";      // �迭 s2 ����, ���ڿ� "Programming" �Ҵ�
  
  puts(s1);     // puts() �Լ��� ����ϸ� �ڵ����� ���� �ٸ� �ٿ� ��µǰ� �ȴ�.
  puts(s2);

  putchar('\n');

  printf(s1);     // printf() �Լ��� ����ϸ� ���๮�ڸ� ���� ������ ������ ������ �������� �پ ��µȴ�.
  printf(s2);
}