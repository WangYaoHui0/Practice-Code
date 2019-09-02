#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
	int num1 = 0;
	int num2 = 0;
	int tmp = 0;
	int count = 0;
	int i = 0;

	scanf("%d%d", &num1, &num2);
	tmp = num1 ^ num2;   //异或：相同为0，相异为1
	//计算tmp中1的个数
	while (tmp)
	{
		count++;
		tmp = tmp & (tmp - 1);
	}
	//for (i = 0; i < 32; i++)
	//{
	//	if ((tmp >> i) & 1)
	//	{
	//		count++;
	//	}
	//}
	printf("两整数的二进制表达式中，不同bit位的个数为：%d\n", count);

	system("pause");
	return 0;
}