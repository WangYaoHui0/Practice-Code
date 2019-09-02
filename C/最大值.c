#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int Max(int n, ...)
{
	va_list arg;
	va_start(arg, n);
	int max = va_arg(arg, int);

	for (int i = 0; i < n - 1; i++)
	{
		int tmp = va_arg(arg, int);
		if (max < tmp)
		{
			max = tmp;
		}
	}
	return max;
}

int main()
{
	printf("最大值为:>%d\n", Max(3, 5, 9, 4));

	system("pause");
	return 0;
}