#include <stdio.h>

/* 练习 1-18 编写一个程序，删除每个输入行末尾的空格及制表符，
 * 并删除完全是空格的行。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define MAXLINE	1000	//允许的输入行的最大长度

int getline2(char line[],int maxline);
int remove2(char s[]);

main()
{
	char line[MAXLINE];	//当前的输入行

	while (getline2(line,MAXLINE) > 0)
		if (remove2(line)> 0)
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

int remove2 (char s[])
{
	int i;

	i = 0;
	while(s[i] != '\n')
		++i;
	--i;
	while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;
	if (i >= 0){
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
}
