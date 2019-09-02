#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strlen(const char* p)
{
	//递归方法实现strlen
	assert(p != NULL);
	if (*p == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(p + 1);
	}
}

//int my_strlen(const char* p)
//{
//	//非递归方法实现strlen
//	int len = 0;
//
//	assert(p != NULL);
//	while (*p++)
//	{
//		len++;
//	}
//	return len;
//}

int main()
{
	char* p = "abcdefg";

	printf("%d\n", my_strlen(p));

	system("pause");
	return 0;
}