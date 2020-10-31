# CHAPTER-7
#include<stdio.h>
int main(void)
{
	char ch;
	int a = 0;//替换次数

	while ((ch=getchar())!='#')
	{
		if (ch == ('.'))
		{
			ch = '!';
			a++;
		}
		else
			if (ch == '!')
			{
				printf("!");
				a++;
			}
		putchar(ch);
	}
	printf("进行了%d次替换。", a);

	return 0;
}
