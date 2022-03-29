#include <stdio.h>

int main() {
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		} //end of inner for
		printf("\n");
	} //end of outer for

	int arr2[3][4] = { 0 };

	printf("arr2의 크기: %d\n", sizeof(arr2));						//48
	printf("arr2[0]의 크기: %d\n", sizeof(arr2[0]));				//16
	printf("arr2[1]의 크기: %d\n", sizeof(arr2[1]));				//16
	printf("arr2[2]의 크기: %d\n", sizeof(arr2[2]));				//16
	printf("arr2[2][3]의 크기: %d\n", sizeof(arr2[2][3]));			//4
	printf("arr2의 길이: %d\n", sizeof(arr) / sizeof(arr[0][0]));	//12	

	return 0;
}
