#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[10] = { 0 };
	//a[10]을 b[10]에 복사
	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
	} //end of for
	for (int i = 0; i < 10; i++) {
		printf("%d\t", b[i]);
	} //end of for
	
	return 0;
}