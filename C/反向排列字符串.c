#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* Reverse_String(char* p)
{
	char* ret = p;
	int len = 0;

	assert(p != NULL);
	while (*ret)
	{
		len++;
		ret++;
	}
	ret--;
	if (len > 1)
	{
		char tmp = *p;
		*p = *ret;
		*ret = '\0';
		Reverse_String(p + 1);
		*ret = tmp;
	}
	return p;
}

int main()
{
	char p[] = "abcdefgh";

	printf("before:>%s\n", p);
	printf("after:>%s\n", Reverse_String(p));

	system("pause");
	return 0;
}