#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int tmp = 0;
	unsigned int n = 0;

 	for (i = 0; i < 32; i++)
	{
		tmp = ((value >> i) & 1);
		if (tmp == 1)
		{
			n |= (1 << (32 - 1 - i));
		}

	}
	return n;
}

void print_bit(unsigned int n)
{
	int i = 0;
	printf("����������Ϊ��>");
	for (i = 31; i >= 0; i--)
	{
		printf("%d ", ((n >> i) & 1));
	}
	printf("\n");
}

int main()
{
	unsigned int num = 0;
	printf("������Ҫ��ת��ֵ��>");
	scanf("%u", &num);
	print_bit(num);
	printf("��ת֮���ֵΪ��> %u\n", reverse_bit(num));
	print_bit(reverse_bit(num));

	system("pause");
	return 0;
}