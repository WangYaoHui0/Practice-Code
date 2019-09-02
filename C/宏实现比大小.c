#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
	int x = 20;
	int y = 30;

	printf("两数中的较大值为:> %d\n", MAX(x, y));

	system("pause");
	return 0;
}