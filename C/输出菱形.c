#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	//���13������ͼ��
	int line = 0;
	int i = 0;
	scanf("%d", &line);

	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j;
		//��ӡ�ո�
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < (line - 1 - i) * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}





	//int i = 0, j = 0;
	//for (i = 1; i <= ((13 + 1) / 2); i++)
	//{
	//	for (j = 1; j <= ((13 - (2 * i - 1)) / 2); j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * i - 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//int m = (13 - ((13 + 1) / 2));
	//for (i = 1; i <= m; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * (m - i) + 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	
	
	
	//int i = 0; //������
	//int j = 0; //������
	//int x = 0; //������
	//printf("��������������x = ");
	//scanf("%d", &x);
	//for (i = 1; i <= ((x + 1) / 2); i++)
	//{
	//	for (j = 1; j <= ((x - (2 * i - 1)) / 2); j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * i - 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}                   //��ӡ�ϰ벿��
	//int m = (x - ((x + 1) / 2));    //�����°벿������
	//for (i = 1; i <= m; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 1; j <= (2 * (m - i) + 1); j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}                     //��ӡ�°벿��
//	system("pause");
//	return 0;
//}