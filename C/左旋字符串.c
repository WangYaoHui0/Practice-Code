#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftSpin_arr(char* arr, int len, int num)
{
	for (int i = num; i > 0; i--)
	{
		int tmp = 0;
		tmp = arr[0];
		for (int j = 1; j < len; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[len - 1] = tmp;
	}
	//if (num == 0)
	//{
	//	;
	//}
	//else
	//{
	//	int tmp = 0;
	//	tmp = arr[0];
	//	for (int i = 1; i < len; i++)
	//	{
	//		arr[i - 1] = arr[i];
	//	}
	//	arr[len - 1] = tmp;
	//	if (num - 1 > 0)
	//	{
	//		LeftSpin_arr(arr, len, num - 1);
	//	}
	//}
}

int main()
{
	//左旋字符串中的k个字符
	int num = 0;
	char arr[] = "ABCDE";
	int len = 0;

	printf("before:> %s\n", arr);
	len = strlen(arr);
	printf("请输入要左旋的位数：>");
	scanf("%d", &num);
	if (num > len)
	{
		printf("左旋位数大于字符串个数，输入错误！\n");
	}
	else
	{
		LeftSpin_arr(arr, len, num);
		printf("after:> %s\n", arr);
	}

	system("pause");
	return 0;
}