#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int Fac(int n)
{
	//�ݹ鷽����n�Ľ׳�
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

//int Fac(int n)
//{
//	//�ǵݹ鷽����n�Ľ׳�
//	int num = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	return num;
//}

int main()
{
	int n = 0;
	
	printf("������һ����:>");
	scanf("%d", &n);

	printf("������Ľ׳�Ϊ:>%d\n", Fac(n));

	system("pause");
	return 0;
}