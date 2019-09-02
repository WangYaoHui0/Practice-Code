#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int my_strcmp(const char* p1, const char* p2)
{
	int ret = 0;

	assert(p1);
	assert(p2);

	while (!(ret = (*(unsigned char*)p1 - *(unsigned char*)p2)) && *p1)
	{
		p1++;
		p2++;
	}

	return ret;
}

int main()
{
	char arr1[] = "abccdde";
	char arr2[] = "abcaefg";

	printf("%d\n", my_strcmp(arr1, arr2));

	system("pause");
	return 0;
}