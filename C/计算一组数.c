#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int main()
{
	//¼ÆËã1/1-1/2+1/3-....+1/99-1/100µÄÖµ
	int i = 0, m = -1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		m = -m;
		sum += m * (1.0 / i);
		/*if(i % 2 == 1)
		{
			sum = sum + (1 / (double)i);
		}
		else
		{
			sum = sum - (1 / (double)i);
		}*/
	}
	printf("%lf ", sum);
	system("pause");
	return 0;
}