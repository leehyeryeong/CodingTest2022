#include <stdio.h>

int main() {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;

	while (s1[cnt] != '\0') {
		cnt++;
	} //end of while
	printf("s1의 길이는 %d입니다.\n", cnt);

	for (int i = 0; i <= cnt; i++) {
		s2[i] = s1[i];
	} //end of for
	printf("s1의 문자열에는 %s 가 들어있습니다.\n", s1);
	printf("s2의 문자열에는 %s 가 들어있습니다.\n", s2);

	return 0;
}