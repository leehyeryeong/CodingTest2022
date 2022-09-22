#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int tile_length) {
	char* answer = (char*)malloc(sizeof(char) * (tile_length + 1));
	char com[6] = { 'R', 'R', 'R', 'G', 'G', 'B' };

	//�ڵ� �ۼ�
	//(tile_length % 6 == 1 || tile_length % 6 == 4 || tile_length % 6 == 6)
	if (tile_length % 6 == 1 || tile_length % 6 == 2 || tile_length % 6 == 4) {
		strcpy(answer, "-1");
	}

	return answer; //-1, ���ڿ�
}
int main() {
	int tile_length1 = 11;
	char* ret1 = solution(tile_length1);
	printf("solution �Լ��� ��ȯ ���� %s�Դϴ�.\n", ret1);

	int tile_length2 = 16;
	char* ret2 = solution(tile_length2);
	printf("solution �Լ��� ��ȯ ���� %s�Դϴ�.\n", ret2);
}