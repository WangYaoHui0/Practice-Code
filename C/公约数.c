#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//求两数的最大公约数
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	while (1)
	{
		if (a % b == 0)
		{
			printf("最大公约数为：%d\n", b);
			system("pause");
			return 0;
		}
		else
		{
			int c = b;
			b = a % b;
			a = c;
		}
	}

	//int a = 0;
	//int b = 0;
	//int min = 0;
	//printf("Input：\n");
	//scanf("%d %d", &a, &b);
	//min = a < b ? a : b;
	//while(min)
	//{
	//	if (a % min == 0 && b % min == 0)
	//	{
	//		printf("最大公约数为：%d\n", min);
	//		system("pause");
	//		return 0;
	//	}
	//	min--;
	//}
}