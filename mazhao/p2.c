#include <stdio.h>
/* 输入任何一个整数，请判断，该数是奇数还是偶数？ */

main()
{
	int a;
	printf("判断奇数还是偶数，请任意输入一个整数\n");
	scanf("%d",&a);

	if (a % 2 == 0)
		printf("%d是偶数\n",a);
	else
		printf("%d是奇数\n",a);
}
