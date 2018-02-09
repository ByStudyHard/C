#include <stdio.h>

/* 练习 1-17 编写一个程序，打印长度大于80个字符的所有输入行。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define MAXLINE	1000	//允许的输入行的最大长度
#define LONGLINE 80	 

int getline2(char line[],int maxline);

//打印大于80字符长度的所有输入行

main()
{
	int len;	//当前行长度
	char line[MAXLINE];	//当前的输入行

	while ((len = getline2(line,MAXLINE)) > 0)
		if (len > LONGLINE)
			printf("%s",line);
	return 0;
}
//getline函数：将一行读入到s中并返回其长度
int getline2(char s[],int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim - 2){
			s[j] = c;
			++j;
		}
	if (c == '\n'){
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
	return i;
}
