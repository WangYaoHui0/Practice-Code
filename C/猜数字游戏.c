#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
	printf("*************************\n");
	printf("********1.��ʼ��Ϸ*******\n");
	printf("********0.�˳���Ϸ*******\n");
	printf("*************************\n");
}

void play_game()
{
	int rand_num = 0;
	int tmp = 0;
	rand_num = rand() % 100;

	while (1)
	{
		printf("������֣�");
		scanf("%d", &tmp);
		if (tmp == rand_num)
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
		else if (tmp > rand_num)
		{
			printf("�´��ˣ������²£�");
		}
		else
		{
			printf("��С�ˣ������²£�");
		}
	}
}

int main()
{
	//��������Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			play_game();
			break;
		}
		case 0:
			printf("�˳��ɹ���\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}