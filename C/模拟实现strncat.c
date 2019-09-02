#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* my_strncat(char* p1, const char* p2, size_t count)
{
	char* ret = p1;

	assert(p1);
	assert(p2);

	while (*p1)
	{
		p1++;
	}
	while (count--)
	{
		*p1++ = *p2++;
		if (*p2 == '\0')
		{
			break;
		}
	}
	*p1 = 0;

	return ret;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "abc";

	printf("%s\n", my_strncat(arr1, arr2, 7));

	system("pause");
	return 0;
}