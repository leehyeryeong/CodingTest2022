#include <stdio.h>
#include <string.h>

int main() {
	char s1[7][10] = { "한국", "미국", "일본", "영국", "독일", "호주", "독일" };

	for (int i = 0; i < 7; i++) {
		if (strcmp(s1[i], "독일")) {
			printf("독일은 %d번째에 있습니다.\n", i + 1);
		} //end of if
	} //end of for

	return 0;
}