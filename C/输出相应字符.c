#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	//小写字符输出对应的大写字符，大写字符输出对应的小写字符，数字不输出
	int ch = 0;

	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
		{
			ch = toupper(ch);
			putchar(ch);
		}
		else if (isupper(ch))
		{
			ch = tolower(ch);
			putchar(ch);
		}
		else if (isdigit(ch))
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}

	system("pause");
	return 0;
}

//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a') && (ch <= 'z'))
//		{
//			putchar(ch - 32);
//		}
//		else if ((ch >= 'A') && (ch <= 'Z'))
//		{
//			putchar(ch + 32);
//		}
//		else if ((ch >= '0') && (ch <= '9'))
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//
//	system("pause");
//	return 0;
//}