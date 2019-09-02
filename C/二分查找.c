#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int bin_search(int arr[], int key, int left, int right)
{
	while (left <= right)
	{
		int tmp = left + ((right - left) / 2);
		if (key == arr[tmp])
		{
			return tmp;
		}
		else if (key < arr[tmp])
		{
			right = tmp - 1;
		}
		else
		{
			left = tmp + 1;
		}
	}
	return -1;
}


int main()
{
	//���۰���ҷ����������������в�����Ҫ������
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	int ret = 0;
	int key = 0;
    scanf("%d", &key);
	ret = bin_search(arr, key, 1, 10);
	if (ret == -1)
	{
		printf("�Ҳ�����\n");
	}
	else
	{
		printf("�ҵ��ˣ����±�Ϊ��%d", ret);
	}

	system("pause");
	return 0;
}