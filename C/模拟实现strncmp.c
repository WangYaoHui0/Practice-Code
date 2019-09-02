#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int my_strncmp(const char* p1, const char* p2, size_t count)
{
	int ret = 0;

	assert(p1);
	assert(p2);

	while (count--)
	{
		if (!(ret = *(unsigned char*)p1 - *(unsigned char*)p2) && *p1 && *p2)
		{
			p1++;
			p2++;
		}
		else
		{
			break;
		}
	}

	return ret;
}

int main()
{
	char arr1[] = "abcddeeff";
	char arr2[] = "abcabc";

	printf("%d\n", my_strncmp(arr1, arr2, 6));

	system("pause");
	return 0;
}