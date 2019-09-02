#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void* my_memmove(void* p1, const void* p2, size_t count)
{
	void* ret = p1;

	assert(p1);
	assert(p2);

	if (p1 < p2)
	{
		while (count--)
		{
			*(char*)p1 = *(char*)p2;
			p1 = (char*)p1 + 1;
			p2 = (char*)p2 + 1;
		}
	}
	else
	{
		p1 = (char*)p1 + count - 1;
		p2 = (char*)p2 + count - 1;
		while (count--)
		{
			*(char*)p1 = *(char*)p2;
			p1 = (char*)p1 - 1;
			p2 = (char*)p2 - 1;
		}
	}

	return ret;
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "dcba";

	printf("%s\n", (char*)my_memmove(arr1, arr2, 3));

	system("pause");
	return 0;
}