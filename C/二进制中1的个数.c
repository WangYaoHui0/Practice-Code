#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int count_one_bits(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}


int main()
{
	//一个参数的二进制中 1 的个数
	int num = 0;

	scanf("%d", &num);
	int ret = count_one_bits(num);
	//int count = 0;

	//scanf("%d", &num);
	//while (num)
	//{
	//	count++;
	//	num = num & (num - 1);
	//	//0100 1010  74
	//	//0100 1001
	//	//
	//	//0100 1000
	//	//0100 0111
	//	//
	//	//0100 0000
	//	//0011 1111
	//	//
	//	//0000 0000

	//}
	printf("%d\n", ret);

	system("pause");
	return 0;
}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	system("pause");
//	return 0;
//}