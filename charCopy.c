#include <stdio.h>

int main() {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;

	while (s1[cnt] != '\0') {
		cnt++;
	} //end of while
	printf("s1�� ���̴� %d�Դϴ�.\n", cnt);

	for (int i = 0; i <= cnt; i++) {
		s2[i] = s1[i];
	} //end of for
	printf("s1�� ���ڿ����� %s �� ����ֽ��ϴ�.\n", s1);
	printf("s2�� ���ڿ����� %s �� ����ֽ��ϴ�.\n", s2);

	return 0;
}