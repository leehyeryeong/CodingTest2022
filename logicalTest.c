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
		printf("0���� 100����\n");
	}
	if (0 <= c && c < 100) {
		printf("0���� 100����\n");
	}

	int d = 5;
	if (d) { //��
		printf("����� ���� ���� �����ؼ� �����մϴ�.\n");
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