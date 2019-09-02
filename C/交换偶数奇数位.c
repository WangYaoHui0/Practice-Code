#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define EXCHANGE(x)\
		(((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1))

int main()
{
	int x = 0;
	printf("请输入一个数:>");
	scanf("%d", &x);

	printf("该数二进制奇数位与偶数位进行交换之后的数字为:>%d\n", EXCHANGE(x));

	system("pause");
	return 0;
}