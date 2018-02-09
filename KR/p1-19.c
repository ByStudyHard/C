#include <stdio.h>

/* 练习 1-19 编写函数reverse(s)将字符串s中的字符顺序颠倒过来。
 * 使用该函数编写一个程序，每次颠倒一个输入行中的字符顺序。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#define MAXLINE	1000

int getline2(char line[],int maxline);
void reverse(char s[]);

main()
{
	char line[MAXLINE];	//当前的输入行

	while (getline2(line,MAXLINE) > 0){
		reverse(line);
		printf("%s",line);
	}
}

void reverse(char s[])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		++i;
	--i;
	if(s[i] == '\n')
		--i;
	j = 0;
	while (j < i){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
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

