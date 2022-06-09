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
	//출력
	printf("배열의 최소값은 %d입니다.\n", min);
	//위치
	printf("최소값의 위치는 %d번째입니다.\n", location);

	return 0;
}