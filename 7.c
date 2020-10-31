# CHAPTER-7
#include<stdio.h>
#define BASIC 10.0
#define overtime 1.5
#define rate1 0.15
#define rate2 0.20
#define rate3 0.25
#define tax1 45
#define tax2 30
int main(void)
{
	float time, salary, tax, s_a_t;

	printf("请输入你一周工作的小时数：");
	scanf_s("%f",&time);
	if (time<=40)
	{
		salary = time * BASIC;
	}
	else
	{
		salary = 40 * BASIC + (time - 40) * 1.5 * BASIC;
	}
	if (salary<=300)
	{
		tax = salary * rate1;
	}
	else if (salary>300 && salary<=450)
	{
		tax = tax1 + (salary - 300) * rate2;
	}
	else
	{
		tax = tax1 + tax2 + (salary - 450) * rate3;
	}
	s_a_t = salary - tax;
	printf("你的税后工资为%f美元。", s_a_t);

	return 0;
}
