// ���� ������ ���ϴ� ���α׷� (����ó���� #define ����Ͽ� �ۼ��ϱ�)
#include <stdio.h>
#define IN "���� �������� 100�Դϴ�. \n"
#define PI 3.1415926535     // ���������� �ۼ��ϸ� AREA �Լ� ���࿡�� ������ ���Ƿ� int������ �ۼ��ؾ� �Ѵ�.
#define AREA(X) (PI*(X)*(X))
#define OUT printf("���� ������ ���ϰ� ���α׷��� �����մϴ�.")

void main() {
  printf("%s \n", IN);
  printf("���� ������ %10.5f �Դϴ�. \n\n", AREA(100));
  OUT;
}