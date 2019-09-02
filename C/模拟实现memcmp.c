#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void* my_memcpy(void* p1, const void* p2, size_t count)
{
	void* ret = p1;
	assert(p1);
	assert(p2);

	while (count--)
	{
		*(char*)p1 = *(char*)p2;
		p1 = (char*)p1 + 1;
		p2 = (char*)p2 + 1;
	}

	return ret;
}

int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "asdf";

	printf("%s\n", (char*)my_memcpy(arr1, arr2, 3));

	system("pause");
	return 0;
}