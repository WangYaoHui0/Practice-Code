#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void Reverse(char *left, char *right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void Reverse_word(char *arr, int len)
{
	assert(arr);
	char *tmp = arr;
	char *left = arr;
	char *right = arr + len - 1;

	//先将整个数组倒置
	Reverse(left, right);
	while (*tmp)
	{
		left = tmp;
		while ((*tmp != '\0') && (*tmp != ' '))
		{
			tmp++;
		}
		right = tmp - 1;
		//倒置每一个单词
		Reverse(left, right);
		if (*tmp == ' ')
		{
			tmp++;
		}
	}
}

int main()
{
	char arr[] = "student a am i";
	int len = strlen(arr);

	//将每个单词倒置
	Reverse_word(arr, len);

	//打印倒置后的数组
	printf("%s\n", arr);

	system("pause");
	return 0;
}