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
	//���һ��������ÿһλ
	int num = 0;
	printf("������һ��������");
	scanf("%d", &num);

	print(num);

	//printf("������һ��������");
	//scanf("%d", &num);
	//printf("�������Ӹ�λ��ÿһλ�ֱ�Ϊ��");
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