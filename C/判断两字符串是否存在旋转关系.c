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
}

void RightSpin_arr(char* arr, int len, int num)
{
	for (int i = num; i > 0; i--)
	{
		int tmp = 0;
		tmp = arr[len - 1];
		for (int j = len - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = tmp;
	}
}

int Judge(char* s1, char* s2, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (s1[i] == s2[i])
		{
			;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int len = 0;
	int i = 0;
	char s1[] = "ABCDE";
	char s2[] = "CDEAB";
	len = strlen(s1);
	printf("s1:>%s\n", s1);
	printf("s2:>%s\n", s2);

	for (i = 1; i <= len; i++)
	{
		if (Judge(s1, s2, len) == 1 && i == 1)
		{
			printf("s1和s2字符串相等！\n");
			break;
		}
		else
		{
			LeftSpin_arr(s1, len, 1);
			if (Judge(s1, s2, len) == 1)
			{
				printf("s2是由s1左旋%d位得到的字符串！\n", i);
				break;
			}
		}
	}
	if (i > len)
	{
		printf("s2无法由s1通过旋转得到！\n");
	}

	system("pause");
	return 0;
}