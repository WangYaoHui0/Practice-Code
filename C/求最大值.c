#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//��10�����������ֵ
	int i, a[10],max;
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 0; i <= 9; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("���ֵΪ��%d\n", max);
	system("pause");
	return 0;
}