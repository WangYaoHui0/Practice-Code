#include <stdio.h>
#include <windows.h>

int main()
{
	//�ж�1000-2000�������
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf(" %d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}












