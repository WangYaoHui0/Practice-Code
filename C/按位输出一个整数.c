#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", (n % 10));
}


int main()
{
	//输出一个整数的每一位
	int num = 0;
	printf("请输入一个整数：");
	scanf("%d", &num);

	print(num);

	//printf("请输入一个整数：");
	//scanf("%d", &num);
	//printf("此整数从个位起，每一位分别为：");
	//if (0 == num)
	//{
	//	printf("%d ", num);
	//}
	//else
	//{
	//	while (num)
	//	{
	//		if (num < 0)
	//		{
	//			num = -num;
	//		}
	//		printf("%d ", (num % 10));
	//		num = num / 10;
	//	}
	//}

	system("pause");
	return 0;
}