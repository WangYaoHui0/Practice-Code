#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

void change(int *pa, int *pb)
{
	int *t = 0;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
int main()
{
	//将三个数从大到小输出
	int arr[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (arr[0] < arr[1])
	{
		int *pa = &arr[0];
		int *pb = &arr[1];
		change(pa, pb);
	}
	if (arr[1] < arr[2])
	{
		int *pa = &arr[1];
		int *pb = &arr[2];
		change(pa, pb);
	}
	if (arr[0] < arr[1])
	{
		int *pa = &arr[0];
		int *pb = &arr[1];
		change(pa, pb);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	//int i, j, k, a[3];
	//for(i = 0; i <= 2; i++)
	//{
	//	scanf("%d", &a[i]);
	//}
	//for (i = 0; i < 2; i++)
	//{
	//	for (j = 0; j < 2 - i; j++)
	//	{
	//		if (a[j] < a[j + 1])
	//		{
	//			k = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = k;
	//		}
	//	}
	//}
	//for (i = 0; i <= 2; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	system("pause");
	return 0;
}