#include <stdio.h>
/* 华氏温度转换摄氏温度
 * 顶部打印标题 */
	main()
{
	int lower,upper,step;
	float fahr,celsius;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("华氏摄氏温度对照表\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f%6.1f\n",fahr,celsius);
		fahr = fahr + step;
	}
}
