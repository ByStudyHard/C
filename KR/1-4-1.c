#include <stdio.h>
/* 打印华氏摄氏温度对照表
 * 另一种方法编写
 * 加入符号常量*/
#define	LOWER	0	/* 表的下限*/
#define	UPPER	300	/* 表的上限*/
#define	STEP	20	/* 步长*/	
main()
{
	int fahr;
	printf("TITLE\n");
	for (fahr = LOWER; fahr <=UPPER; fahr = fahr + STEP)
		printf("%3d%6.1f\n",fahr,(5.0 / 9.0) * (fahr - 32));
}
