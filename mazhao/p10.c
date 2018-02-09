#include <stdio.h>

main()
{
	int a = 7;
	float x = 2.5, y = 4.7;

	printf("值 = %f\n",x + a % 3 * (int)(x + y) % 2 / 4);
}
