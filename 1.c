#include<stdio.h>
int main(void)
{
	char ch;
	int a = 0, b = 0, c = 0;//分别为空格数、换行符数、其他字符数。

	while ((ch=getchar())!='#')
	{
		if (ch == ' ')
			a++;
		else
		{


			if (ch == '\n')
				b++;
			else c++;
		}
	}
	printf("有%d个空格，%d个换行符，%d个其他字符。\n",a,b,c);

	return 0;
}
