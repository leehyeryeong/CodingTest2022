#include <stdio.h>

int main() {
	char s1[20] = { "coding test" };
	int cnt = 0;
	//s1�� ���� => while => 11
	//==0, =='\0'
	while (s1[cnt] != '\0') {
		cnt++;
	} //end of while
	printf("���ڿ��� ����: %d\n", cnt);
	cnt = 0;
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break;
		cnt++;
	} //end of for
	printf("���ڿ��� ����: %d\n", cnt);

	return 0;
}