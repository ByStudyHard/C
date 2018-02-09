#include <stdio.h>

/* 练习1-11 你准备如何测试单词计数程序？
 * 如果程序中存在某种错误，那么什么样的输入最可能发现这类错误呢？
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

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

