#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	//输出13行菱形图形
	int line = 0;
	int i = 0;
	scanf("%d", &line);

	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		int j;
		//打印空格
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < (line - 1 - i) * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}





	//int i = 0, j = 0;
	//for (i = 1; i <= ((13 + 1) / 2); i++)
	//{
	//	for (j = 1; j <= ((13 - (2 * i - 1)) / 2); j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * i - 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//int m = (13 - ((13 + 1) / 2));
	//for (i = 1; i <= m; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * (m - i) + 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	
	
	
	//int i = 0; //代表行
	//int j = 0; //代表列
	//int x = 0; //总行数
	//printf("请输入总行数：x = ");
	//scanf("%d", &x);
	//for (i = 1; i <= ((x + 1) / 2); i++)
	//{
	//	for (j = 1; j <= ((x - (2 * i - 1)) / 2); j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * i - 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}                   //打印上半部分
	//int m = (x - ((x + 1) / 2));    //计算下半部分行数
	//for (i = 1; i <= m; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * (m - i) + 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}                     //打印下半部分
//	system("pause");
//	return 0;
//}