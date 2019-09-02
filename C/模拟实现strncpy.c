#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* my_strncpy(char* p1, const char* p2, size_t count)
{
	char* ret = p1;

	assert(p1);
	assert(p2);

	while (count--)
	{
		if (*p2 != '\0')
		{
			*p1++ = *p2++;
		}
		else
		{
			*p1++ = 0;
		}
	}

	return ret;
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "dc";

	printf("%s\n", my_strncpy(arr1, arr2, 5));

	system("pause");
	return 0;
}