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
		remainder += num % 2;//��ƿ����ˮʱ���µ�һ����ƿ
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

	printf("%d��Ǯ�����Ժ�%dƿ��ˮ\n", money, Max_soft_drink(money));

	system("pause");
	return 0;
}