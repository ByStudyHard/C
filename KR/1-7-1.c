#include <stdio.h>

/* 1.7节 函数
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

// 函数原型：表示power函数有两个int类型的参数，并返回一个int类型的值。
int power(int m, int n); 

// 测试power函数
main()
{
	int i;
	
	for (i = 0; i < 10; ++i)
//调用power函数两次，main函数向power函数传递两个参数；
		printf("%d\t%d\t%6d\n",i,power(2,i),power(-3,i));
	return 0;	//向执行环境返回状态：正常终止。
}

// power函数：求底数的n次幂；其中n >= 0.
int power(int base, int n)	//
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}
