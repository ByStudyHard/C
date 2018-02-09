#include <stdio.h>
/* 练习1-22 编写一个程序，把较长的输入行“折”成短一些的两行或多行；
 * 折行的位置在输入行的第n列之前的最后一个非空格之后。
 * 要保证程序能够智能地处理输入行很长以及在指定的列前没有空格或制表符时的情况。
 * 
 * 学生：学Bug
 * 微信公众号：ByStudyHard
 *
 * 解题思路：
 * 第一句很好理解，定义一个符号常量MAXLINE，输入行大于MAXLINE循环输出\n折行；
 * 第二句不好理解，多读几遍，第n列之前的最后一个非空格之后折行，n=MAXLINE ？
 * 第三句补充说明，也比较拗口，忽略空格及制表符？	*/

//#define	MAXLINE	20	//一行不超过20个字符；
#define	MAXCOL	10	//最大输入列
#define	TABINC	8	//制表符数量

char line[MAXCOL];	//数组，输入行

int exptab(int pos);	//函数原型
int findblnk(int pos);	//函数原型
int newpos(int pos);	//函数原型
void printl(int pos);	//函数原型

//长输入行折成两行或多行

main()
{
	int c, pos; 
	pos = 0;	//行中的位置
	
	while ((c = getchar()) != EOF){
		line[pos] = c;	//数组储存当前字符
		if (c == '\t')
			pos =exptab(pos);//调用函数
		else if (c == '\n'){
			printl(pos);//调用函数
			pos = 0;
		}else if (++pos >= MAXCOL){
			pos = findblnk(pos);//调用函数
			printl(pos);
			pos = newpos(pos);
		}
	}
}

//printl函数，打印行直到pos
void printl(int pos)
{
	int i;
	for (i = 0; i < pos; ++i)
		putchar(line[i]);
	if (pos > 0)
		putchar('\n');
}

//exptab函数，制表符换成空格
int exptab(int pos)
{
	line[pos] = ' ';
	for (++pos; pos < MAXCOL && pos % TABINC != 0; ++pos)
		line[pos] = ' ';
	if (pos < MAXCOL)
		return pos;
	else {
		printl(pos);
		return 0;
	}	
}

//findblnk函数，找到空白位置
int findblnk(int pos)
{
	while (pos > 0 && line[pos] != ' ')
		--pos;
	if (pos == 0)
		return MAXCOL;
	else
		return pos+1;
}

//newpos函数，新位置
int newpos(int pos)
{
	int i, j;

	if (pos <= 0 || pos >= MAXCOL)
		return 0;
	else {
		i = 0;
		for (j = pos; j < MAXCOL; ++j){
			line[i] = line[j];
			++i;
		}
		return i;
	}
}
