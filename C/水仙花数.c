#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	int i = 0;
	int num;
	scanf("%d", &num);

	for (i = 0; i <= num; i++)
	{
		int sum = 0;
		int tmp = 0;

		//����i��λ��
		int count = 1;
		tmp = i;
		while (tmp >= 10)
		{
			tmp = tmp / 10;
			count++;
		}

		//���i��ÿһλ����η���
		tmp = i;
		while (tmp)
		{
			sum = sum + pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//�ж��Ƿ�Ϊˮ�ɻ���
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}



//int main()
//{
//	//��ӡ0-999֮�����Ե�ˮ�ɻ���
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int a = i / 100;  //�����λ
//		int b = (i / 10) % 10;  //����ʮλ
//		int c = i % 10;  //�����λ
//		if ((a*a*a + b*b*b + c*c*c) == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}