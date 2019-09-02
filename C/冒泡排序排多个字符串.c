#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(char* str[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (strcmp(*(str + j), *(str + j + 1)) > 0)
			{
				char* tmp = *(str + j);
				*(str + j) = *(str + j + 1);
				*(str + j + 1) = tmp;
			}
		}
	}
}

int main()
{
	char* str[] = { "acbd", "bdca", "cdab", "abcd" };
	int len = sizeof(str) / sizeof(*str);

	bubble_sort(str, len);
	for (int i = 0; i < len; i++)
	{
		printf("%s ", *(str + i));
	}
	printf("\n");

	system("pause");
	return 0;
}