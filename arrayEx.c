#include <stdio.h>
//#include <string.h>

int solution(int score[], int score_len) {
	int cnt = 0;
	for (int i = 0; i < score_len; i++) {
		if (score[i] >= 650 && score[i] < 800) {
			cnt++;
		} //end of if
	} //end of for
	return cnt;
} //end of solution
int main() {
	int score[] = { 650, 722, 914, 558, 714, 803, 650, 679, 609, 800 };
	int result;
	result = solution(score, 10);	//solution 함수 만들어라
	printf("수강 대상: %d\n", result);

	return 0;
} //end of main