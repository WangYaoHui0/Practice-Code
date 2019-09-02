#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 32, 28, 24, 9, 6, 32, 9, 24, 28 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int tmp = arr[0];

	for (i = 1; i < len; i++)
	{
		tmp ^= arr[i];
		//10 0000  32
		//01 1100  28
		//11 1100
		//01 1000  24
		//10 0100
		//00 1001   9
		//10 1101
		//00 0110   6
		//10 1011
		//10 0000  32
		//00 1011
		//00 1001   9
		//00 0010
		//01 1000  24
		//01 1010
		//01 1100  28
		//00 0110   6
	}
	printf("只出现了一次的数为：>%d\n", tmp);

	system("pause");
	return 0;
}