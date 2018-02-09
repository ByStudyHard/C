#include <stdio.h>

/* 练习1-13 编写一个程序，打印输入中单词长度的直方图。
 * 水平方向的直方图比较容易绘制，垂直方向的直方图则要困难些。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	
 *
 * 水平直方图	未限制柱体长度，一个*代表一个单词	*/

#define TEN	10	//统计的最长单词字符数；
#define ONE	1	//统计的最短单词字符数；

main()
{
	int c, nc, i, nother, len;
	int ndigit[10];

	nc = nother = 0;

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF){
		if (c != ' ' && c != '\t' && c != '\n')
			++nc;
		else
			if (nc >= ONE && nc <= TEN){
				++ndigit[nc - ONE];
				nc = 0;//真执行，假跳过
			}
	}
		if (nc >= ONE && nc <= TEN)
			++ndigit[nc - ONE];
		else if (nc > TEN)
			++nother;
	
	for (i = 0; i < 10; ++i){
		printf("%2d ",ndigit[i]);
		while (ndigit[i] > 0){
			putchar('*');
				--ndigit[i];
		}
		if(ndigit[i] <= 0)
			printf("\n");
	}
		printf("%2d\n",nother);
}
