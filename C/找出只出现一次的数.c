#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void Find(int* arr, int sz)
{
	int i = 0;
	int num = 0;
	int flag = 0;
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) != 1)//�ҳ�����������ֶ�����λ�����ȳ���1��λ�ã���������
		{                         //flag���λ�ô�����һ������ڶ������Ķ�����λ��һ�γ���
			flag++;               //��ͬ������һ��Ϊ1��һ��Ϊ0
		}
		else
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> flag) & 1) == 1)//��flagλ�ô���������λΪ1����
		{
			num1 ^= arr[i];
		}
		else                            //��flagλ�ô���������λΪ0����
		{
			num2 ^= arr[i];
		}
	}
	printf("%d %d\n", num1, num2);
}

//void Find(int* arr, int sz)
//{
//	int tmp = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		int num = 0;
//		tmp = arr[i];
//		for (int j = 0; j < sz; j++)
//		{
//			if (tmp == arr[j])
//			{
//				num++;
//			}
//		}
//		if (num == 1)
//		{
//			printf("%d ", tmp);
//		}
//	}
//}

int main()
{
	int arr[] = { 1, 2, 4, 1, 7, 5, 2, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Find(arr, sz);

	system("pause");
	return 0;
}