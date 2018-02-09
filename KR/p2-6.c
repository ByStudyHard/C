#include <stdio.h>
/* 练习2-6 编写一个函数setbits(x,p,n,y)，该函数返回对x执行下列操作后的结果值：将x中从第p位开始的n个（二进制）位设置为y中最右边n位的值，x的其余各位保持不变。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard      */

unsigned setbits(unsigned x, int p, int n, unsigned y);
main()
{
	printf("%d\n",setbits(5858,8,88,666));
	return 0;
}
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return x & ~(~(~0<<n) << (p+1-n)) | (y & ~(~0<<n)) << (p+1-n);
}
// ~  按位求反运算符
// << 左移
// &  按位与
// |  按位或
