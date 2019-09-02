#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和
	int num = 0;
	int tmp = 0;
	int i = 0;
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);

	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		num = num + tmp;
	}
	printf("num = %d ", num);
	system("pause");
	return 0;
}