#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int Power(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return x * Power(x, n - 1);
	}
}

int main()
{
	int x = 0;
	int n = 0;

	printf("�����������ָ��:>");
	scanf("%d%d", &x, &n);
	
	printf("%d��%d�η�Ϊ:>%d\n", x, n, Power(x, n));

	system("pause");
	return 0;
}