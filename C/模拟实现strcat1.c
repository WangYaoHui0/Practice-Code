#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;

	assert(dest != NULL);
	assert(src != NULL);

	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

int main()
{
	char p1[20] = "abcdef";
	char p2[] = "hello";

	printf("%s\n", my_strcat(p1, p2));

	system("pause");
	return 0;
}