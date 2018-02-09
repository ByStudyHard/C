#include <stdio.h>
/* 摄氏温度转换相应华氏温度的转换表*/
main()
{
	int lower,upper,step;
	float fahr,celsius;
	lower = -10;	/* 摄氏温度下限 */
	upper = 40;	/* 摄氏温度上限 */
	step = 	5;	/* 步长 */
	celsius = lower;

	printf("摄氏华氏温度转换表\n");
	while (celsius <= upper) {
		fahr = (celsius * 9.0 / 5.0) + 32.0;
		printf("%3.0f%6.1f\n",celsius,fahr);
		celsius = celsius + step;
	}
}
