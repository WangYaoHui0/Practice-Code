#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ�
	//�е�һ��������Ϊ4�����ɷ��Ĺ��ʡ�
	//A˵�������ҡ�
	//B˵����C��
	//C˵����D��
	//D˵��C�ں�˵
	//��֪3����˵���滰��1����˵���Ǽٻ���
	//�����������Щ��Ϣ��дһ��������ȷ������˭������

	char killer = '0';

	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("killer is��%c\n", killer);
		}
	}

	system("pause");
	return 0;
}