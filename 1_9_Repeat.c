#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(char* characters) {
	char* result[] = (char*)malloc(sizeof(char) * strlen(characters));
	int result_len = 0;
	result[0] = characters[0];
	result_len++;

	for (int i = 0; i < strlen(characters); i++) {
		if (characters[i] != characters[i + 1]) {
			result[result_len] = characters[i];
			result_len++;
		}
	}

	return result;
}
int main() {
	char* characters = "senteneeenccccceeee";
	char* ret = solution(characters);
	printf("solution 함수의 반환 값은 %s입니다.\n", ret);

	return 0;
}