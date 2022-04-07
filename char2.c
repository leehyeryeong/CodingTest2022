#include <stdio.h>

int main() {
	char colors[5][10] = { "red", "green", "blue", "brown", "cyan" };
	//단어 단위로 출력
	for (int i = 0; i < 5; i++) {
		printf("%s\t", colors[i]);
	} //end of for
	//문자 단위로 출력
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c ", colors[i][j]);
		} //end of inner for
	} //end of outer for

	return 0;
}
