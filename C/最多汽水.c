#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int Max_soft_drink(int money)
{
	int sum = 0;
	int num = money;
	int remainder = 0;

	while (num)
	{
		sum += num;
		remainder += num % 2;//空瓶换汽水时单下的一个空瓶
		if (remainder == 2)
		{
			num = num / 2 + 1;
			remainder = 0;
		}
		else
		{
			num /= 2;
		}
	}
	return sum;
}

int main()
{
	int money = 20;

	printf("%d块钱最多可以喝%d瓶汽水\n", money, Max_soft_drink(money));

	system("pause");
	return 0;
}