#include <stdio.h>
/* 练习1-9 编写一个将输入复制到输出的程序，
 * 并将其中连续的多个空格用一个空格代替。
 * 作者:学Bug
 * 微信公众号：ByStudyHard	*/

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

// 版本2

	int c, c0;	// c0表示紧挨着c的另一个字符；
	c0 = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (c0 != ' ')
				putchar(c);
		c0 = c;
	}

}
