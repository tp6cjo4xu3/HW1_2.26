#include <stdio.h>
#include <stdlib.h>
int a, b;
int main(void)
{
	printf("�п�J2�Ӿ��");
	scanf_s("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("a��b������\n");
	}
	else
	{
		printf("a����b������\n");
	}
	system("pause");
	return 0;
}