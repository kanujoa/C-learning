#include <stdio.h>
#define SIZE 100     // ��ũ�� ��� SIZE�� 100���� ����

#if defined SIZE     // ��ũ�� ��� SIZE�� ���� ���θ� Ȯ�� (���⼭�� true�̴�.)
#undef SIZE     // ��ũ�� ��� SIZE�� ���� ����
#define SIZE 200     // ��ũ�� ��� SIZE�� 200���� ���� (���� �����ϵǴ� ���α׷��� �Ʒ� #else�� �ش��ϴ� �κ��� �ƴ� #if�� �ش��ϴ� �κл��̴�.)
#else
#define SIZE 300     // ��ũ�� ��� SIZE�� ���ǵ��� �ʾ����� 300���� ����
#endif     // ��ũ�� ���ǹ��� �ݵ�� #endif�� �����ؾ� �Ѵ�.

void main() {
  printf("SIZE : %d \n", SIZE);
}