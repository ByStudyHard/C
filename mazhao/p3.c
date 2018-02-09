#include <stdio.h>
/* 输入一个三位数的整数（如365），编写一个程序，将其百位数、十位数、个位数逆序输出（即563）。*/

main()
{
	int n, a, b, c;

	printf("逆序输出，请输入一个三位数整数\n");

	scanf("%d",&n);
		a = n % 10;
		b = n / 10 % 10;
		c = n / 100; 
	printf("%d%d%d\n",a,b,c);
}
