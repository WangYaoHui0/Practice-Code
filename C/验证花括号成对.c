#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//编写一个程序，它从标准输入读取c源代码，并验证所有的花括号都正确的成对出现
	int count = 0;
	int ch = 0;
	//char ch = {0};
	while ((ch = getchar()) != EOF)
	{
		if ((ch == '}') && (count == 0))
		{
			printf("不匹配\n");
			system("pause");
			return 0;
		}
		else if ((ch == '}') && (count != 0))
		{
			count--;
		}
		else if (ch == '{')
		{
			count++;
		}
	}
    if (count == 0)
	{
		printf("匹配\n");
	}
	else
	{
		printf("不匹配\n");
	}
	system("pause");
	return 0;
}
//	int count = 0;
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '{')
//		{
//			count++;
//		}
//		if ((ch == '}') && count <= 0)
//		{
//			printf("不匹配\n");
//			system("pause");
//			return 0;
//		}
//		if ((ch == '}') && count != 0)
//		{
//			count--;
//		}
//	}
//	if (0 == count)
//	{
//		printf("匹配\n");
//	}
//	else
//	{
//		printf("不匹配\n");
//	}
//	system("pause");
//	return 0;
//}
