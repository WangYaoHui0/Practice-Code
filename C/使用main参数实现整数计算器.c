#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
	int num1 = atoi(argv[2]);
	int num2 = atoi(argv[3]);
	int ret = 0;

	if (argc != 4)
	{
		printf("参数输入错误！\n");
		return 1;
	}
	if (argv[1][0] == '-')
	{
		switch (argv[1][1])
		{
		case 'a':
			ret = num1 + num2;
			printf("%d\n", ret);
			break;
		case 's':
			ret = num1 - num2;
			printf("%d\n", ret);
			break;
		case 'm':
			ret = num1 * num2;
			printf("%d\n", ret);
			break;
		case 'd':
			ret = num1 / num2;
			printf("%d\n", ret);
			break;
		default:
			printf("第二个参数输入错误！\n");
			break;
		}
	}

	system("pause");
	return 0;
}