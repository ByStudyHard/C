#include <stdio.h>
/* 1.54 单词计数
 * 统计输入的行数、单词数与字符数 */

#define IN	1	//在单词内
#define OUT	0	//在单词外

main()
{
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF){
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("行数:%d 单词数:%d 字符数:%d\n",nl,nw,nc);
}

