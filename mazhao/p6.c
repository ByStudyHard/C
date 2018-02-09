#include <stdio.h>
//强制转换类型解决无法进行的运算问题。
main()
{
	float a = 3,b = 5;

	printf("%d\n",(int)a % (int)b);

	return 0;
}
