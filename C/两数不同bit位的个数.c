#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
	int num1 = 0;
	int num2 = 0;
	int tmp = 0;
	int count = 0;
	int i = 0;

	scanf("%d%d", &num1, &num2);
	tmp = num1 ^ num2;   //�����ͬΪ0������Ϊ1
	//����tmp��1�ĸ���
	while (tmp)
	{
		count++;
		tmp = tmp & (tmp - 1);
	}
	//for (i = 0; i < 32; i++)
	//{
	//	if ((tmp >> i) & 1)
	//	{
	//		count++;
	//	}
	//}
	printf("�������Ķ����Ʊ��ʽ�У���ͬbitλ�ĸ���Ϊ��%d\n", count);

	system("pause");
	return 0;
}