#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[10] = { 0 };
	int sum = 0;
	double avg = 0;
	//����
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100+1;
		printf("%d\t", arr[i]);
	}
	//�հ�
	printf("\n");
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	printf("�հ�: %d\n", sum);
	//���
	avg = (double)sum / 10;
	printf("���: %lf\n", avg);

	return 0;
}