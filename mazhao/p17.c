#include <stdio.h>
#include <math.h>	//引入标准库，数学函数
/* 求一个三位正整数的算术平方根，如果输入的不是三位数，程序能给出”error input“的提示并可重新输入。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
int main()
{
	int a;
	float b;

	printf("请输入一个三位正整数，求其算数平方根\n");
	scanf("%d",&a);
	
	while (a / 100 >9 || a / 100 <1){
		printf("error input,请重新输入：\n");
		scanf("%d",&a);
		while (a / 100 > 0 && a / 100 < 10){
			b = sqrt(a);
			printf("%d的算数平方根为：%f\n",a,b);
		}
	}
	return 0;
}
