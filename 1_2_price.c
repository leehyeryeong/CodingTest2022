#include <stdio.h>
#include <string.h>

int solution(int price, char* grade) {
	int answer;

	if (strcmp(grade, "S")==0) {
		answer = (int)price-(price * 0.05);
	}
	else if (strcmp(grade, "G")==0) {
		answer = (int)price-(price * 0.1);
	}
	else if (strcmp(grade, "V")==0) {
		answer = (int)price-(price * 0.15);
	}

	return answer;
}
int main(void) {
	char* grade[6] = { "S", "G", "V" };
	int result;
	result = solution(2500, "V");
	printf("���� �ݾ�: %d\n", result);

	return 0;
}