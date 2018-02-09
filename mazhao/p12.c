#include <stdio.h>
/* 九九乘法表
 * 学生：学Bug
 * 微信公众号：ByStudyHard。	*/

main()
{
	int i, j, mul;

	for(i = 1;i < 10; i++){
		for(j = 1; j < i + 1; j++){
			mul = i * j;
		printf("%d*%d=%d\t", j,i,mul);
		}
	printf("\n");
//		}
	}
//	print
	return 0;
}

