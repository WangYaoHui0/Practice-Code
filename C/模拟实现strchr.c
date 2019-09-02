#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strchr(const char* p, char ch)
{
	char* ret = (char*)p;

	assert(p != NULL);

	while (*ret)
	{
		if (*ret == ch)
		{
			return ret;
		}
		ret++;
	}
	return NULL;
}

int main()
{
	char p[] = "abcdef";
	char ch = 'd';

	printf("%s\n", my_strchr(p, ch));


	system("pause");
	return 0;
}