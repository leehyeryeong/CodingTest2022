#include <stdio.h>

int main()
{
	//기본) 출력함수
	printf("   ");
	printf("aaaaaaaa\nbbbbbbbb\n");
	printf("%d\n", 100);
	printf("%lf\n", 12.3);
	printf("%.5lf\n", 12.3);
	printf("%c\n", 'a');
	printf("%s\n", "a");

	int a = 10;
	double b = 5.7;
	char ch = 'A';
	int c = a + b;
	char fruit[6] = "apple";

	return 0;
}
