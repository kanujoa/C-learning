#include <stdio.h>
void main() {
  enum day1 {SUN, MON, TUE, WED, THU, FRI, SAT} d1;     // ù��° �������� �� 0 (����Ʈ)
  enum day2 {sun = 2, mon, tue, wed, thu, fri, sat} d2;     // �ʱ갪 2�� ����
  d1 = WED;     // ������ WED ����
  d2 = wed;     // ������ wed ����
  printf("������ d1�� ����� ���� %d �Դϴ�. \n", d1);     // WED�� ���� ����.
  printf("������ d2�� ����� ���� %d �Դϴ�.", d2);     // wed�� ���� ����.
}