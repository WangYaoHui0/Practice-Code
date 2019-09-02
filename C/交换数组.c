#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//交换两数组的内容
	int arr1[] = { 12,32,11,3,5 }, arr2[] = { 7,2,42,13,54 };
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)   //用sizeof(arr1)/sizeof(arr1[0])求数组长度
	{
		arr2[i] = arr1[i] ^ arr2[i];
		arr1[i] = arr1[i] ^ arr2[i];
		arr2[i] = arr1[i] ^ arr2[i];
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%2d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%2d ", arr2[i]);
	}
	//int arr1[5] = { 12,32,11,3,5 }, arr2[5] = { 7,2,42,13,54 };
	//int arr3[5] = {0}, i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	arr3[i] = arr2[i];
	//	arr2[i] = arr1[i];
	//	arr1[i] = arr3[i];
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr1[i]);
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr2[i]);
	//}
	system("pause");
	return 0;
}