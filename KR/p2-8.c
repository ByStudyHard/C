#include <stdio.h>
/* 练习2-8 编写一个函数rightrot(x, n),该函数返回将x循环右移（即从最右端移出的位将从最左端再移入）n（二进制)位后所得到的值。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard      */
unsigned rightrot (unsigned x, int n);
int wordlength(void);

main()
{
	printf("%d\n",rightrot(10000, 8));
}

unsigned rightrot (unsigned x, int n)
{
	int wordlength(void);
	int rbit;

	while ( n-- > 0){
		rbit = (x & 1) << (wordlength() - 1);
		x = x >> 1;
		x = x | rbit;
	}
	return x;
}

int wordlength(void)
{
	int i;
	unsigned v = (unsigned) ~0;
	for (i = 1; (v = v >> 1) > 0; i++)
		;
	return i;
}
