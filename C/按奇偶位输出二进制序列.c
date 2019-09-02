#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
	int num = 0;
	int i = 0;

	scanf("%d", &num);
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	//int num = 0;
	//int i = 0;
	//int arr[32] = { 0 };

	//scanf("%d", &num);
	//for (i = 0; i < 32; i++)
	//{
	//	arr[31 - i] = ((num >> i) & 1);
	//}

	//printf("二进制奇数位序列为：");
	//for (i = 0; i <= 30; i += 2)
	//{
	//	printf("%d", arr[i]);
	//}
	//printf("\n");
	//printf("二进制偶数位序列为：");
	//for (i = 1; i <= 31 ; i += 2)
	//{
	//	printf("%d", arr[i]);
	//}
	//printf("\n");

	system("pause");
	return 0;
}