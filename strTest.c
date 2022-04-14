#include <stdio.h>
#include <string.h>

int main() {
	char s1[100] = "coding test";
	char s2[100];
	char s3[100];

	printf("s1 문자열의 길이: %d\n", strlen(s1));
	strcpy(s2, s1); //s1을 s2에 카피
	printf("%s\n", s2);
	strcat(s2, s1);	//s1과 s2를 붙임
	printf("%s\n", s2);
	printf("%d\n", strcmp("mirim", "high"));
	printf("%d\n", strcmp("mirim", "mirim"));

	/* if (strcmp(student[i], "XS") == 0) {
		count[i]++;
	} //end of if */

	return 0;
}