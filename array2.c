#include <stdio.h>
int arr1[10];		//�������� => �Լ����� �����ϴ� ���� => �ʱ�ȭ X
int main() {
	//int num = 10;
	//int arr[num];
	int arr2[10];	//main������ �����ϴ� �������� => �ʱ�ȭ

	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d\n", i, arr2[i]);
	} //end of for
	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d\n", i, arr1[i]);
	} //end of for

	return 0;
}