#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print(char* format, ...)
{
	char *tmp = NULL;
	va_list arg;
	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == 's')
		{
			puts(va_arg(arg, char*));
		}
		else if (*format == 'c')
		{
			putchar(va_arg(arg, char));
		}
		else if (*format == 'd')
		{
			char str[20];
			sprintf(str, "%d", va_arg(arg, int));
			puts(str);
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(arg);
}

int main()
{
	print("s ccc d.\n", "hello", 'b', 'i', 't', 100);

	system("pause");
	return 0;
}