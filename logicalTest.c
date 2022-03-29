#include <stdio.h>

int main()
{
	int score = 73;

	if (score >= 90) {
		printf("A\n");
	}
	else if (score >= 80) {
		printf("B\n");
	}
	else if (score >= 70) {
		printf("C\n");
	}
	else {
		printf("D\n");
	} //end of if

	int c = 200;
	if (0 <= c || c < 100) {
		printf("0부터 100사이\n");
	}
	if (0 <= c && c < 100) {
		printf("0부터 100사이\n");
	}

	int d = 5;
	if (d) { //참
		printf("결과가 참일 때로 생각해서 진행합니다.\n");
	}

	int e = 10;
	if (e == 7) {
		printf("Hi\n");
		printf("Hello\n");
	}

	int i;
	int total = 0;
	for (i = 0; i < 10; i++) {
		total += i;
		if (total == 10) { break; }
	}
	printf("%d\n", i);
	printf("%d\n", total);

	return 0;
}
