#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strstr(const char* p1, const char* p2)
{
	char* ret = (char*)p1;
	char* start1 = (char*)p1;
	char* start2 = (char*)p2;

	assert(p1 != NULL);
	assert(p2 != NULL);

	if (*p2 == '\0')
	{
		return NULL;
	}
	while (*ret)
	{
		start1 = ret;
		start2 = (char*)p2;
		while (*start1 == *start2)
		{
			start1++;
			start2++;
		}
		if (*start2 == '\0')
		{
			return ret;
		}
		ret++;
	}
	return NULL;
}

int main()
{
	char p1[] = "abcccdeffcdef";
	char p2[] = "cdef";

	printf("%s\n", my_strstr(p1, p2));

	system("pause");
	return 0;
}