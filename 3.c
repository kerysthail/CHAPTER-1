# CHAPTER-7
#include<stdio.h>
int main(void)
{
	int a, b, n = 0, m = 0;//
	float av1, av2, sum1 = 0, sum2 = 0;//

	scanf_s("%d", &a);
	while (a!=0)
	{
		b = a % 2;
		if (b == 0)
		{
			n++;
			sum1 += a;
		}
		else
		{
			m++;
			sum2 += a;
		}
		scanf_s("%d", &a);
	}
	av1 = sum1 / n;
	av2 = sum2 / n;
	printf("输入偶数个数为%d个，平均值为%f,输入奇数个数为%d个,平均值为%f.", n, av1, m, av2);

	return 0;
}
