#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int votes[], int votes_len, int N, int K) {
	int count[11] = { 0 };

	for (int i = 0; i < votes_len; i++) {
		count[votes[i]]++;
	}

	int answer = 0;

	for (int i = 0; i < N; i++) {
		if (count[i] == K) {
			answer++;
		}
	}

	return answer;
}
int main() {
	int votes[10] = { 2, 5, 3, 4, 1, 5, 1, 5, 5, 3 };
	int votes_len = 10;
	int N = 5;
	int K = 2;
	int ret = solution(votes, votes_len, N, K);

	printf("solution 함수의 반환 값은 %d입니다.\n", ret);
}