#include <stdio.h>
/* 练习题1-6 验证表达式getchar() != EOF的值 */

main()
{
	int c;
	while (c = getchar() != EOF)
		printf("%d\n",c);
}
