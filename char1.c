#include <stdio.h>

int main() {
	//char zero = '0';
	//int n = zero - 48;
	//printf("%c\n", zero);
	//printf("%d\n", n);
	//char ch = '9';
	//int number = ch - 48;
	//int n = 9;
	//printf("문자: %c, 수: %d, 수: %d\n", ch, number, n);

	char s1[] = "COS PRO";
	char s2[10] = { 'k', 'o', 'r', 'e', 'a' };

	//s1 = "mirim high"; //문자열 배열 이름에 대입연산 불가

	printf("%s %d\n", s1, sizeof(s1));
	printf("%s %d\n", s2, sizeof(s2));

	return 0;
}