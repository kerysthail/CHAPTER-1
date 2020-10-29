# CHAPTER-7
#include<stdio.h>
int main(void)
{
	char ch;
	int a = 0, b;//分别为字符数，模8

	while ((ch=getchar())!='#')
	{
		a++;
		b = a % 8;
		printf("%c-%d  ", ch, ch);
		if (b==0)
		{
			printf("\n");
		}

	}

	return 0;
}
