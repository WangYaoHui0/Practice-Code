#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	//�����������
	int i = 0;
	char key[10] = "0";

	printf("���������룺");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", key);
		if (strcmp(key, "123456") == 0)
		{
			printf("������ȷ����½�ɹ���\n");
			system("pause");
			return 0;
		}
		else
		{
			printf("����������������룺");
		}
	}
	printf("�������볬��������½ʧ�ܣ�\n");

	system("pause");
	return 0;
}