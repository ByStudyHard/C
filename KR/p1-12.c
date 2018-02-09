#include <stdio.h>

/* 练习1-12 编写一个程序，以每行一个单词的形式打印其输入。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

main()
{
	int c;

	while ((c = getchar()) != EOF){
		if ( c == ' ' || c == '\t'){
			printf("\n");
			while ((c = getchar()) == ' ' || c == '\t')
				;
		}
		putchar(c);
	}
}
