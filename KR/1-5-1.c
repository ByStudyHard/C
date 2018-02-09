#include <stdio.h>
/* 将输入复制到输出；版本1 */
main()
{
	int d;
	d = getchar();
	while (d != EOF) {
		putchar(d);
		d = getchar();	
	}
}
