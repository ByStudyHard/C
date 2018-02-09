#include <stdio.h>
#include <stdio.h>
/* 练习1-14 编写一个程序，打印输入中各字符出现频度的直方图。
 *
 * 习题解答
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define	MAXHIST	15	//直方图柱体最长长度；
#define MAXCHAR	128	//字符数种类最大值；

main()
{
	int c, i;
	int len;	//柱体长度
	int maxvalue;	//计数器最大值
	int cc[MAXCHAR];//字符计数器

	for (i = 0; i < MAXCHAR; ++i)
		cc[i] = 0;
	while ((c = getchar()) != EOF)
		if (c < MAXCHAR)
			++cc[c];
	maxvalue = 0;
	for (i = 1; i < MAXCHAR; ++i)
		if (cc[i] > maxvalue)
			maxvalue = cc[i];
	for (i = 1; i < MAXCHAR; ++i){
		if (isprint(i))
			printf("%5d - %c - %5d : ",i, i, cc[i]);
		else
			printf("%5d -   - %5d : ",i, cc[i]);
		if (cc[i] > 0){
			if ((len = cc[i] * MAXHIST / maxvalue) <= 0)
				len = 1;
		}
		else
			len = 0;
		while (len > 0){
			putchar('*');
			--len;
		}
		putchar('\n');
	}
}
