#include <stdio.h>

int main() {
	int arr[10];

	printf("arr 배열의 크기: %d bytes\n", sizeof(arr));				//4*10=40
	printf("arr 배열 요소의 크기: %d bytes\n", sizeof(arr[0]));		//4
	printf("arr 배열의 길이: %d\n", sizeof(arr) / sizeof(arr[0]));	//10

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	} //end of for

	return 0;
}
