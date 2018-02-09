#include <stdio.h>
//#include <limits.h>

/* 练习2-1 编写一个程序以确定分别由signed及unsigned限定的char、short、int及long类型变量的取值范围。采用打印标准头文件中的相应2值以及直接计算两种方式实现。通过直接计算来确定浮点类型的取值范围是一项难度很大的任务。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

//直接计算方式

main()
{
	printf("signed char min = %d\n",-(char)((unsigned char) ~0 >> 1));
	printf("signed char max = %d\n",(char)((unsigned char) ~ 0 >> 1));
	printf("signed short min = %d\n",-(short)((unsigned short) ~ 0 >> 1));
	printf("signed short max = %d\n",(short)((unsigned short) ~ 0 >> 1));
	printf("signed int min = %d\n",-(int)((unsigned int) ~ 0 >> 1));
	printf("signed int max = %d\n",(int)((unsigned int) ~ 0 >> 1));
	printf("signed long min = %ld\n",-(long)((unsigned long) ~ 0 >> 1));
	printf("signed long max = %ld\n",(long)((unsigned long) ~ 0 >> 1));

	printf("unsigned char max = %u\n",(unsigned char) ~ 0);
	printf("unsigned short max = %u\n",(unsigned short) ~ 0);
	printf("unsigned int max = %u\n",(unsigned int) ~ 0);
	printf("unsigned long max = %u\n",(unsigned long) ~ 0);
}
