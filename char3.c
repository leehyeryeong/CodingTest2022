#include <stdio.h>

int main() {
	char s1[20] = { "coding test" };
	int cnt = 0;
	//s1의 길이 => while => 11
	//==0, =='\0'
	while (s1[cnt] != '\0') {
		cnt++;
	} //end of while
	printf("문자열의 길이: %d\n", cnt);
	cnt = 0;
	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break;
		cnt++;
	} //end of for
	printf("문자열의 길이: %d\n", cnt);

	return 0;
}