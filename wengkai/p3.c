#include <stdio.h>
/* 求最大公约数
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

int main()
{
	int a, b, min;
	printf("请输入两个整数用空格隔开，求其最大公约数：\n");
	scanf("%d %d",&a,&b);

	if (a < b){
	min = a;
	}else{
	min = b;
	}

	int ret = 0;
	int i;
	
	for (i = 1; i < min; i++){
		if (a % i == 0){
			if (b % i == 0){
				ret = i;
			}
		}
	}
	printf("%d和%d的最大公约数是%d.\n",a,b,ret);

	return 0;
}

