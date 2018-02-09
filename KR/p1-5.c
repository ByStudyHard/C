#include <stdio.h>
/* 打印华氏摄氏温度对照表
 * 另一种方法编写
 * 倒序显示*/
main()
{
	int fahr;
	printf("TITLE\n");
	for (fahr = 300; fahr >=0; fahr = fahr - 20)
		printf("%3d%6.1f\n",fahr,(5.0 / 9.0) * (fahr - 32));
}
