#include <stdio.h>
/* 练习1-15 重新编写1.2节中的温度转换程序，使用函数实现温度转换计算。
 *
 * 学      生：学Bug
 * 微信公众号：ByStudyHard	*/

float wdzh(float fahr);//函数原型 

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper){
		printf("%3.0f\t%6.1f\n",fahr,wdzh(fahr));//调用函数
		fahr = fahr + step;
	}
	return 0;
}

float wdzh(float fahr)
{
	return (5.0 / 9.0) * (fahr -32.0);
}
