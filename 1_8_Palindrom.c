#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(char* sen) {
	char* str = (char*)malloc(sizeof(char) * 103);
	int len = 0;
	for (int i = 0; i < strlen(sen); i++) {
		char ch = sen[i];
		if (ch != ' ' || ch != '.') {
			str[len++] = ch;
		}
	}
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) {
			return false;
		}
	}
	return true;
}
int main() {
	char str[] = "racecar";
	int result;
	result = solution(str);
	if (result == true) {
		printf("�Ӹ���� �����Դϴ�.");
	}
	else {
		printf("�Ӹ���� ���ڰ� �ƴմϴ�.");
	}
	return 0;
}