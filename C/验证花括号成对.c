#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//��дһ���������ӱ�׼�����ȡcԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ���
	int count = 0;
	int ch = 0;
	//char ch = {0};
	while ((ch = getchar()) != EOF)
	{
		if ((ch == '}') && (count == 0))
		{
			printf("��ƥ��\n");
			system("pause");
			return 0;
		}
		else if ((ch == '}') && (count != 0))
		{
			count--;
		}
		else if (ch == '{')
		{
			count++;
		}
	}
    if (count == 0)
	{
		printf("ƥ��\n");
	}
	else
	{
		printf("��ƥ��\n");
	}
	system("pause");
	return 0;
}
//	int count = 0;
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '{')
//		{
//			count++;
//		}
//		if ((ch == '}') && count <= 0)
//		{
//			printf("��ƥ��\n");
//			system("pause");
//			return 0;
//		}
//		if ((ch == '}') && count != 0)
//		{
//			count--;
//		}
//	}
//	if (0 == count)
//	{
//		printf("ƥ��\n");
//	}
//	else
//	{
//		printf("��ƥ��\n");
//	}
//	system("pause");
//	return 0;
//}
