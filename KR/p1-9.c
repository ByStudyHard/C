#include <stdio.h>
/* 练习1-9 编写一个将输入复制到输出的程序，
 * 并将其中连续的多个空格用一个空格代替。
 * 作者:学Bug
 * 微信公众号：ByStudyHard	*/
#define NONBLANK 'a'
main()
{
/* 版本1
	int c;	
	while ((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
		putchar(c);
			while ((c = getchar()) == ' ')
			;
		}
		putchar(c);
	}
*/
	int c, lastc;
	lastc = NONBLANK;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')
				putchar(c);
		lastc = c;
	}

}
