#include <stdio.h>
int main()
{
	int a = 10;
	double b = 5.7;
	char ch = 'A';
	int c = a + b;
	char fruit[6] = "apple";
	//ȭ�鿡 ���
	printf("%d\n", a);
	printf("%lf\n", b);
	printf("%c\n", ch);
	printf("%d\n", c);

	int length;
	length = sizeof(fruit) / sizeof(fruit[0]);	//�迭�� ���� ���ϱ�

	for (int i = 0; i < length; i++) {
		printf("%c", fruit[i]);
	} //end of for

	return 0;
} //end of main