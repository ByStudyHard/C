#include <stdio.h>
/* 练习1-23 编写一个删除C语言程序中所有的注释语句。
 * 要正确处理带引号的字符串与字符常量。在C语言中，注释不允许嵌套。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard
 *
 * 解答思路：
 * 注释是编译运行过程忽略的一部分，如何批量删除？没一点头绪。直接参考习题解答*/

void rcomment(int c);	//remoce comments
void in_comment(void);
void echo_quote(int c);

main()
{
	int c, d;
	
	while ((c = getchar()) != EOF)
		rcomment(c);	//函数调用；
	return 0;
}

void rcomment(int c)
{
	int d;
	
	if (c == '/')
		if ((d = getchar()) == '*')
		 	in_comment();	//函数调用
		else if (d == '/'){
			putchar(c);
			rcomment(d);	//函数调用
		}else {
			putchar(c);
			putchar(d);
		}
	else if (c == '\'' || c == '"')
		echo_quote(c);		//函数调用
	else
		putchar(c);
}

void in_comment(void)
{
	int c,d;
	
	c = getchar();
	d = getchar();
	while (c != '*' || d != '/'){
		c = d;
		d = getchar();
	}
}

void echo_quote(int c)
{
	int d;

	putchar(c);
	while ((d = getchar()) != c) {
		putchar(d);
		if (d == '\\')
			putchar(getchar());
	}
	putchar(d);
}
