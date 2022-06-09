#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[10] = { 0 };
	int sum = 0;
	double avg = 0;
	//저장
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100+1;
		printf("%d\t", arr[i]);
	}
	//합계
	printf("\n");
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	printf("합계: %d\n", sum);
	//평균
	avg = (double)sum / 10;
	printf("평균: %lf\n", avg);

	return 0;
}