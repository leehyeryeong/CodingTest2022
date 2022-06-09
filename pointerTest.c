#include <stdio.h>
#include <string.h>

int main() {
	int number = 100;
	printf("number 주소: %p	값: %d\n", &number, number);

	int n = 5;
	int *ptr = &n; //5
	*ptr = 10;
	printf("n의 값: %d\n", n);

	return 0;
}