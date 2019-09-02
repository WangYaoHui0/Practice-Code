#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void Init_arr(int arr[NUM][NUM], int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			arr[i][j] = (i + 1) * (j + 1) * 2;
		}
	}
}

void Print_arr(int arr[NUM][NUM], int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int Find_num(int arr[NUM][NUM], int num, int tmp)
{
	int row = 0;
	int col = num - 1;
	while (1)
	{
		if (arr[row][col] < tmp)
		{
			printf("%d ", arr[row][col]);
			row++;
			if (row >= num)
			{
				break;
			}
		}
		else if (arr[row][col] > tmp)
		{
			printf("%d ", arr[row][col]);
			col--;
			if (col < 0)
			{
				break;
			}
		}
		else
		{
			printf("%d ", arr[row][col]);
			return 1;
		}
	}
	return 0;
}

int main()
{
	//在杨氏矩阵中查找一个数
	int arr[NUM][NUM] = { 0 };
	int tmp = 0	;

	Init_arr(arr, NUM);
	Print_arr(arr, NUM);

	printf("请输入要查找的数：>");
	scanf("%d", &tmp);
	printf("比较过的数有：>");
	int i = Find_num(arr, NUM, tmp);
	if (i == 1)
	{
		printf("\n找到了！\n");
	}
	else
	{
		printf("\n没找到！\n");
	}

	system("pause");
	return 0;
}