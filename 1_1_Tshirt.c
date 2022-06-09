#include <stdio.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_leng) {
	int* answer;
	answer = (int*)(malloc(sizeof(int) * shirt_size_leng));
	//초기화
	for (int i = 0; i < shirt_size_leng; i++) {
		answer[i] = 0;
	}
	//로직
	for (int i = 0; i < shirt_size_leng; i++) {
		if (strcmp(shirt_size[i], "XS") == 0) {
			answer[0]++;
		}
		else if (strcmp(shirt_size[i], "S") == 0) {
			answer[1]++;
		}
		else if (strcmp(shirt_size[i], "M") == 0) {
			answer[2]++;
		}
		else if (strcmp(shirt_size[i], "L") == 0) {
			answer[3]++;
		}
		else if (strcmp(shirt_size[i], "XL") == 0) {
			answer[4]++;
		}
		else if (strcmp(shirt_size[i], "XXL") == 0) {
			answer[5]++;
		}
	}
	return answer;
}
int main(void) {
	char* shirt_size[6] = { "XS", "XS", "XXL", "S", "M", "L" };
	int* result;
	result = solution(shirt_size, 6);
	for (int i = 0; i < 6; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}