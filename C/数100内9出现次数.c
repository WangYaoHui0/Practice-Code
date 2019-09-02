#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//算出1到100的所有整数中出现数字9的次数
	//int ten = 0, unit = 0, count = 0;
	//for (ten = 0; ten <= 9; ten++)
	//{
	//	for (unit = 0; unit <= 9; unit++)
	//	{
	//		if (ten == 9)
	//		{
	//			count++;
	//		}
	//		if (unit == 9)
	//		{
	//			count++;
	//		}
	//	}
	//}
	int count = 0;
	for (int i = 1; i < 100; i++)
	{
		int a = i / 10;
		int b = i % 10;
		if (a == 9)
		{
			count++;
		}
		if (b == 9)
		{
			count++;
		}
	}
	printf("%d ", count);
	system("pause");
	return 0;
}