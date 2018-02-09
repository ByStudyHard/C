#include <stdio.h>

/* 1.8节 参数-传值调用；
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

int power(int m, int n); 

main()
{
	int n;
	
	for (n = 0; n < 10; ++n)
		printf("%d\t%d\t%6d\n",n,power(2,n),power(-3,n));
	return 0;
}

// power函数：求底数的n次幂；版本2
int power(int base, int n)
{
	int p;

	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}
/*
调用函数n = 0	被调函数n = 1	--n = 0	 函数值p = p * base;
调用函数n = 1	被调函数n = 2	--n = 1	 函数值p = p * base * base;
调用函数n = 2	…………
调用函数n = 8	被调函数n = 9	--n = 8	 函数值p = p * base 8次方
调用函数n = 9	被调函数n = 10	--n = 9	 函数值p = p * base 9次方
调用函数n = n	被调函数n = n+1	--n = n	 函数值p = p * base n次方
*/
