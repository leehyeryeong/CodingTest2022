#include <stdio.h>

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 5, b = a;
	swap(a, b);
	printf("�Լ� ȣ�� ��\n");
	printf("a: %d, b: %d\n", a, b);

	return 0;
}