#include <stdio.h>
void display(int length, char ch) {
	for (int i = 0; i < length; i++) {
		printf("%c", ch);
	}
}
int isEven(int num) {
	return (num % 2 == 0) ? 1 : 0;
}
int main() {
	display(20, '#');
	if (isEven(10) == 1) {
		printf("\nÂ¦¼öÀÔ´Ï´Ù.");
	}
	else {
		printf("\nÈ¦¼öÀÔ´Ï´Ù.");
	}
	return 0;
}