#include <stdio.h>
#include <string.h>

int main() {
	int number = 100;
	printf("number �ּ�: %p	��: %d\n", &number, number);

	int n = 5;
	int *ptr = &n; //5
	*ptr = 10;
	printf("n�� ��: %d\n", n);

	return 0;
}