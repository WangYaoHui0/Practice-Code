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
		if (((num >> i) & 1) != 1)//找出异或后这个数字二进制位中最先出现1的位置，表明，在
		{                         //flag这个位置处，第一个数与第二个数的二进制位第一次出现
			flag++;               //不同，必有一个为1，一个为0
		}
		else
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> flag) & 1) == 1)//在flag位置处，二进制位为1的数
		{
			num1 ^= arr[i];
		}
		else                            //在flag位置处，二进制位为0的数
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