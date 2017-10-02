#include <stdio.h>
#include <stdlib.h>
int a, b;
int main(void)
{
	printf("請輸入2個整數");
	scanf_s("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("a為b的倍數\n");
	}
	else
	{
		printf("a不為b的倍數\n");
	}
	system("pause");
	return 0;
}