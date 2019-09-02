#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	//密码输入程序
	int i = 0;
	char key[10] = "0";

	printf("请输入密码：");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", key);
		if (strcmp(key, "123456") == 0)
		{
			printf("密码正确，登陆成功！\n");
			system("pause");
			return 0;
		}
		else
		{
			printf("密码错误，请重新输入：");
		}
	}
	printf("密码输入超次数，登陆失败！\n");

	system("pause");
	return 0;
}