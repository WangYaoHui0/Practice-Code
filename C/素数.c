#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	//���100-200�����������
	int a, b, c = 0;
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b <= sqrt(a); b++)
		{
			if (a % b == 0)
				break;
		}
		if (b > sqrt(a))
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}