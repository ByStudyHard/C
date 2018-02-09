#include <stdio.h>

/* 练习2-2 在不使用&&或||的条件下编写一个与上面的for循环语句等价的循环语句。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard      */

main()
{
//	for(i = 0; i<lim-1 && (c=getchar())!= '\n' && c != EOF; ++i)
  	
	int i, lim;
	char c, s;

	lim = 100;

        enum loop { NO, YES};   //enumerate 枚举常量,非显示说明，NO=0，YES=1
        enum loop okloop = YES; //okloop 枚举变量

        i = 0;
        while (okloop == YES){
                if(i >= lim - 1)
                        okloop = NO;
                else if ((c = getchar()) == '\n')
                        okloop = NO;
                else if (c == EOF)
                        okloop = NO;
                else {
                        s = c;
			printf("s[%d] = %c\n",i,s);//加一句输出
                        ++i;			
                }
	}
}
