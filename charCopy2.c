#include <stdio.h>

int main() {
	char s1[20] = { "coding test" };
	char s2[20];
	int i;

	for (i = 0; s1[i] != 0; i++) {
		s2[i] = s1[i];
	} //end of for
	s2[i] = 0;
	printf("s2�� ����� ���ڿ��� %s�Դϴ�.\n", s2);

	return 0;
}