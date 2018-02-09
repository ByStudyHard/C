#include <stdio.h>
/* 练习2-8 编写一个函数rightrot(x, n),该函数返回将x循环右移（即从最右端移出的位将从最左端再移入）n（二进制)位后所得到的值。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard      */
//第二种解法
unsigned rightrot (unsigned x, int n);
int wordlength(void);

main()
{
	printf("%d\n",rightrot(10000, 8));
}

unsigned rightrot (unsigned x, int n)
{
	int wordlength(void);
	unsigned rbits;
	
	if ((n = n % wordlength()) > 0){
		rbits = ~(~0 << n) &x;
		rbits = rbits << (wordlength() - n);
		x = x >> n;
		x = x | rbits;
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
