#include <stdio.h>

int main() {
	int arr[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int min = arr[0];
	int location = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
			location = i;
		} //end of if
	} //end of for
	//���
	printf("�迭�� �ּҰ��� %d�Դϴ�.\n", min);
	//��ġ
	printf("�ּҰ��� ��ġ�� %d��°�Դϴ�.\n", location);

	return 0;
}