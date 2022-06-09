#include <stdio.h>

int main() {
	int arr[10] = { 2, 5, 78, 43, -45, 68, 31, 100, 45, 23 };
	int max = arr[0];	//정해진 상수 X 첫번째 값의 주소(일반화 된 값) 넣기
	int location = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			location = i;
		} //end of if
	} //end of for
	//출력
	printf("배열의 최대값은 %d입니다.\n", max);
	//위치
	printf("최대값의 위치는 %d번째입니다.\n", location);

	return 0;
}