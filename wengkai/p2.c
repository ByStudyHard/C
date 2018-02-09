#include <stdio.h>
/* 逆序任意数
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
main()
{
	int x;
	int digit;
	int ret = 0;

	scanf("%d",&x);

	while(x > 0){
		digit = x % 10;
		printf("%d",digit);
		ret = ret * 10 + digit;
//		printf("x = %d\tdigit = %d\tret = %d\t\n",x,digit,ret);
		x /= 10;
	}
	printf("\n");
	
	return 0;
}
