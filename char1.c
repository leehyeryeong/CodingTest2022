#include <stdio.h>

int main() {
	//char zero = '0';
	//int n = zero - 48;
	//printf("%c\n", zero);
	//printf("%d\n", n);
	//char ch = '9';
	//int number = ch - 48;
	//int n = 9;
	//printf("����: %c, ��: %d, ��: %d\n", ch, number, n);

	char s1[] = "COS PRO";
	char s2[10] = { 'k', 'o', 'r', 'e', 'a' };

	//s1 = "mirim high"; //���ڿ� �迭 �̸��� ���Կ��� �Ұ�

	printf("%s %d\n", s1, sizeof(s1));
	printf("%s %d\n", s2, sizeof(s2));

	return 0;
}