#include <stdio.h>
#include <string.h>

int main() {
	char s1[7][10] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��", "����" };

	for (int i = 0; i < 7; i++) {
		if (strcmp(s1[i], "����")) {
			printf("������ %d��°�� �ֽ��ϴ�.\n", i + 1);
		} //end of if
	} //end of for

	return 0;
}