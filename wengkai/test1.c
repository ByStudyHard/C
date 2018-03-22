/* 第一周编程练习：逆序的三位数
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <stdio.h>

int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a = n / 100;
	b = (n % 100) / 10;
	c = (n % 100) % 10;
	printf("%d\n",c * 100 + b * 10 + a);
	return 0;
}
