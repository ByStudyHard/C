#include <stdio.h>
/* 练习1-10 编写一个将输入复制到输出的程序，
 * 并将其中的制表符替换为\t，把回退符替换为\b，把反斜杠替换为\\。
 * 这样可以将制表符和回退符以可见的方式显示出来。
 *
 * 作者:学Bug
 * 微信公众号：ByStudyHard	*/

main()
{
	int c;	
	while ((c = getchar()) != EOF)
	{
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("\\b");
		else if(c == '\\')
			printf("\\\\");
/*
		if(c == ' ')
		{
		putchar(c);
			while ((c = getchar()) == ' ') 
			;
		}
		
		if(c == '\t')
		{
		printf("\\t");
			while ((c = getchar()) == '\t' )
			printf("\\t");
			 
		}
		
		if(c == '\\')
		{
		printf("\\\\");
			while ((c = getchar()) == '\\')
			printf("\\\\");
		}
*/
		else
		putchar(c);
	}
}
