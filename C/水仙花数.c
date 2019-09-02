#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	int i = 0;
	int num;
	scanf("%d", &num);

	for (i = 0; i <= num; i++)
	{
		int sum = 0;
		int tmp = 0;

		//计算i的位数
		int count = 1;
		tmp = i;
		while (tmp >= 10)
		{
			tmp = tmp / 10;
			count++;
		}

		//获得i的每一位，求次方和
		tmp = i;
		while (tmp)
		{
			sum = sum + pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//判断是否为水仙花数
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}



//int main()
//{
//	//打印0-999之间所以的水仙花数
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int a = i / 100;  //计算百位
//		int b = (i / 10) % 10;  //计算十位
//		int c = i % 10;  //计算个位
//		if ((a*a*a + b*b*b + c*c*c) == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}