#include <stdio.h>

int main() {
	int arr[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int max = arr[0];	//������ ��� X ù��° ���� �ּ�(�Ϲ�ȭ �� ��) �ֱ�
	int location = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			location = i;
		} //end of if
	} //end of for
	//���
	printf("�迭�� �ִ밪�� %d�Դϴ�.\n", max);
	//��ġ
	printf("�ִ밪�� ��ġ�� %d��°�Դϴ�.\n", location);

	return 0;
}