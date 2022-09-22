#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <String.h>
//코드 추가

int solution(char* words[], int words_len, char* word) {
	int count = 0;
	//코드 작성
	for (int i = 0; i < words_len; i++) {
		if (strcmp(words[i], word)) {
			for (int j = 0; j < 4; j++) {
				if (words[i][j] != word[j]) {
					count++;
				}
			}
		}
	}
	return count;
}
int main() {
	char* words[3] = { "CODE", "COED", "CDEO" };
	int words_len = 3;
	char* word = "CODE";
	int ret = solution(words, words_len, word);

	printf("solution 함수의 반환 값은 %d입니다.\n", ret);
}