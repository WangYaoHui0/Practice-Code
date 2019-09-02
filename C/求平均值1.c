#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int Average(int n, ...)
{
	va_list arg;
	va_start(arg, n);

	int num = 0;
	for (int i = 0; i < n; i++)
	{
		num += va_arg(arg, int);
	}
	va_end(arg);

	return num / n;
}

int main()
{
	printf("平均值为:>%d\n", Average(5, 5, 9, 13, 9, 15));

	system("pause");
	return 0;
}