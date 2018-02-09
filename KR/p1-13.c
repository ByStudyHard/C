#include <stdio.h>

/* 练习1-13 编写一个程序，打印输入中单词长度的直方图。
 * 水平方向的直方图比较容易绘制，垂直方向的直方图则要困难些。
 *
 * [习题解答-2-垂直方向直方图]
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define MAXHIST	15	//最长的柱状图
#define MAXWORD	11	//最长的单词
#define IN	1	//单词内
#define OUT	0	//单词外

main()
{
	int c, i, j, nc, state;
	int maxvalue;
	int ovflow;
	int wl[MAXWORD];
	state = OUT;
	nc = 0;
	ovflow = 0;
	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;

	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			if (nc > 0)
				if (nc < MAXWORD)
					++wl[nc];
				else
					++ovflow;
			nc = 0;
		} else if (state == OUT){
			state = IN;
			nc = 1;
		}else
			++nc;
	}
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i)
		if (wl[i] > maxvalue)
			maxvalue = wl[i];

	for (i = MAXHIST; i > 0; --i){
		for(j = 1; j < MAXWORD; ++j)
			if(wl[j] * MAXHIST / maxvalue >= i)
				printf(" * ");
			else
				printf("   ");
		putchar('\n');
	}
	for (i = 1; i < MAXWORD; ++i)
		printf("%2d ",i);
	putchar('\n');
	for (i = 1; i < MAXWORD; ++i)
		printf("%2d ",wl[i]);
	putchar('\n');
	if (ovflow > 0)
		printf("There are %d words >= %d\n",ovflow,MAXWORD);
}
