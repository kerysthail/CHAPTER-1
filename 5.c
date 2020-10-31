# CHAPTER-7
#include<stdio.h>
int main(void)
{
	char ch;
	int a = 0;//替换次数

	while ((ch=getchar())!='#')
	{
		switch (ch)
		{
		case '.': ch = '!';
			      a++;
				  break;
		case '!': printf("!");
			      a++;
				  break;
		default:
			break;
		}
		putchar(ch);
	}
	printf("\n");
	printf("进行了%d次替换。", a);

	return 0;
}
