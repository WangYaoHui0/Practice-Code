#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
	printf("*************************\n");
	printf("********1.开始游戏*******\n");
	printf("********0.退出游戏*******\n");
	printf("*************************\n");
}

void play_game()
{
	int rand_num = 0;
	int tmp = 0;
	rand_num = rand() % 100;

	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &tmp);
		if (tmp == rand_num)
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		else if (tmp > rand_num)
		{
			printf("猜大了！请重新猜：");
		}
		else
		{
			printf("猜小了！请重新猜：");
		}
	}
}

int main()
{
	//猜数字游戏
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
		{
			play_game();
			break;
		}
		case 0:
			printf("退出成功！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}