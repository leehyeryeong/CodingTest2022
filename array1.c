#include <stdio.h>

int main() {
	int arr[10];

	printf("arr �迭�� ũ��: %d bytes\n", sizeof(arr));				//4*10=40
	printf("arr �迭 ����� ũ��: %d bytes\n", sizeof(arr[0]));		//4
	printf("arr �迭�� ����: %d\n", sizeof(arr) / sizeof(arr[0]));	//10

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	} //end of for

	return 0;
}