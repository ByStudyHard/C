#include <stdio.h>
/* 1.10 外部变量与作用域
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define	MAXLINE	1000	//允许的输入行的最大长度

//定义了三个外部变量
int max;		//到目前为止发现的最长行的长度
char line[MAXLINE];	//当前的输入行
char longest[MAXLINE];	//用于保存最长的行

int getline2(void);	//函数原型声明
void copy(void);	//函数原型声明

//打印最长的输入行；特别版本
main()
{
	int len;
	extern int max;	//外部变量定义在main之前，extern可省略。
	extern char longest[];	//extern可省略

	max = 0;
	while ((len = getline2()) > 0)
		if (len > max){
			max = len;
			copy();
		}
	if (max > 0)	//存在这样的行
		printf("%s",longest);
	return 0;
}

//getline函数：特别版本	
int getline2(void)
{
	int c, i;
	extern char line[];	//extern可省略
	
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
//copy函数：特别版本
void copy(void)
{
	int i;
	extern char line[],longest[];	//extern可省略

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
