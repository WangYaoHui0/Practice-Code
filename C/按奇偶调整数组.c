#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

void rand_arr(int *arr, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
}

void Improve_arr(int *arr, int num)
{
	int left = 0;
	int right = num - 1;
	int tmp = 0;
	while (left < right)
	{
		while ((arr[left] % 2) == 1 && left < right)
		{
			left++;
		}
		while ((arr[right] % 2) == 0 && left < right)
		{
			right--;
		}
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	//调整数组使奇数全部都位于偶数前面
	int arr[NUM] = { 0 };
	int i = 0;
	srand((unsigned int)time(NULL));

	rand_arr(arr, NUM);
	printf("before:>");
	for (i = 0; i < NUM; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");

	Improve_arr(arr, NUM);
	printf("after:>");
	for (i = 0; i < NUM; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}