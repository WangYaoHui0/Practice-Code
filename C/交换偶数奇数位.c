#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define EXCHANGE(x)\
		(((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1))

int main()
{
	int x = 0;
	printf("������һ����:>");
	scanf("%d", &x);

	printf("��������������λ��ż��λ���н���֮�������Ϊ:>%d\n", EXCHANGE(x));

	system("pause");
	return 0;
}