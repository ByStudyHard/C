#include <stdio.h>
/* 练习1-14 编写一个程序，打印输入中各个字符频度的直方图。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#define MAXHIST	20		//柱体的最长长度；
#define MAXCHAR	30		//最大字符个数；

main()
{
	int c, i, nother;
//	int lastc;		//紧挨着c的字符；
	int len;		//直方图柱体长度；
	int nc[MAXCHAR];	//柱体相同字符计数；

	nc = 0;

	for (i = 0; i < MAXCHAR; ++i)
		nc[i] = 0;

	while ((c = getchar()) != EOF){
		
//		if(c = nc[i])
			++nc[i];
			
	}
	printf("%d ",nc[i]);
}
