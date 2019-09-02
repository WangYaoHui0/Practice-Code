#include <stdio.h>
#include <windows.h>

//void change(int *pa, int *pb)
//{
//	int *t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
int main()
{
	//交换两整形变量的值
	//int a = 10, b = 20;
	//int *pa = &a, *pb = &b;
	//printf("a = %d, b = %d \n", a, b);
	//change(pa, pb);
	//printf("a = %d, b = %d ", a, b);
	int i = 10, j = 20, k;
	printf("i = %d ,j = %d \n", i, j);
	k = i;
	i = j;
	j = k;
	printf("i = %d ,j = %d \n", i, j);
	system("pause");
	return 0;
}