#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;

	assert(dest != NULL);
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char p1[] = "abcdefg";
	char p2[] = "hello";

	printf("%s\n", my_strcpy(p1, p2));

	system("pause");
	return 0;
}