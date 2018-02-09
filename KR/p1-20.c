#include <stdio.h>
/* 练习1-20 请编写程序detab，将输入中的制表符替换成适当数目的空格，
 * 使空格充满到下一个制表符终止的地方。假设制表符终止位的位置是固定的，
 * 比如每隔n列就会出现一个制表符终止位。n应该作为变量还是符号常量呢？
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define	TABINC	8	//符号变量 定义一个制表符=8个空格；

main()
{
	int c, nb, pos;	//局部变量声明

	nb = 0;		//空格数
	pos = 1;	//行中字符位置
	while((c = getchar()) != EOF){
		if(c == '\t'){
			nb = TABINC - (pos - 1) % TABINC;//求模运算符%
			while(nb > 0){
				printf("\\b");//空格用/b替代了
				++pos;
				--nb;
			}
		}else if (c == '\n'){
			putchar(c);
			pos = 1;
		}else{
			putchar(c);
			++pos;
		}
	}
}
