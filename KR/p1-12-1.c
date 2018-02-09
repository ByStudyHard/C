#include <stdio.h>
/* 练习1-12 编写一个程序，以每行一个单词的形式打印其输入。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define IN	1	//在单词内
#define OUT	0	//在单词外

main()
{
	int c, state;
	state = OUT;

	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t'){
			if (state == IN){
	//			putchar('\n');
				printf("\n");
				state = OUT;
			}
		}
		else if (state == OUT){
			state = IN;
			putchar(c);
		}
		else
			putchar(c);
	}
}
