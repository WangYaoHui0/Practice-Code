#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void Print(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
	}
	else
	{
		Print(n / 10);
		printf("%d ", n % 10);
	}
}

int main()
{
	int n = 0;

	printf("������һ������:>");
	scanf("%d", &n);

	printf("������ÿһλΪ:>");
	Print(n);
	printf("\n");

	system("pause");
	return 0;
}