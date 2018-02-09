#include <stdio.h>
/* 练习1-21 编写程序entab，将空格串替换为最少数量的制表符和空格，但要保持单词之间的间隔不变。假设制表符终止位的位置与练习1-20的detab程序的情况相同。当使用一个制表符或者一个空格都可以到达下一个制表符终止位时，选用哪一种替换字符比较好？
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define	TABINC	8	//符号变量 定义一个制表符=8个空格；

main()
{
	int c, nb, nt, pos;	//局部变量声明
	nb = 0;		//空格数
	nt = 0;		//制表符数
	pos = 1;	//行中字符位置
	for (pos = 1; (c =getchar()) != EOF;++pos)
		if (c == ' '){
			if (pos % TABINC != 0)
				++nb;
			else{
				nb = 0;
				++nt;
			}
		}else{
			for( ; nt > 0; --nt)
//				putchar('\t');
				printf("\\t");
			if (c == '\t')
				nb = 0;
			else
				for ( ; nb > 0; --nb)
//					putchar(' ');
					printf("\\b");
			putchar(c);
			if (c == '\n')
				pos = 0;
			else if (c == '\t')
				pos = pos + (TABINC - (pos - 1) % TABINC) - 1;
		}
}
