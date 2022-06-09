#include <stdio.h>

int *add(int x, int y) {
	int sum;
	sum = x + y;
	return &sum;

	return 0;
}
int main(vode) {
	int x = 5, y = 7;
	int* pz;
	pz = add(x, y);
	printf("%d\n", pz); //1¹ø
	printf("%d\n", pz); //2¹ø

	return 0;
}