#include <stdio.h>
/* 练习1-8 编写一个统计空格、制表符与换行符个数的程序。
 * 练习题基础上添加了回退符统计。测试ctrl+h = backspace 
 * 作者；学Bug
 * 微信公众号：BystudyHard	*/
main()
{
	int c, sp, tb, nl, bsp;

	sp = 0;
	tb = 0;
	nl = 0;
	bsp = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++sp;
		if (c == '\t')
			++tb;
		if (c == '\n')
			++nl;
		if (c == '\b')
			++bsp;
	}
	printf("空格数共:%d\n",sp);
	printf("制表符共:%d\n",tb);
	printf("换行符共:%d\n",nl);
	printf("回退符共:%d\n",bsp);
}
