#include <stdio.h>
#include <string.h>

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* pArr = &arr[0];
	int i;

	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", &arr[i], arr[i]);
	} //end of for
	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", pArr+i, *(pArr+i));
	} //end of for

	return 0;
}