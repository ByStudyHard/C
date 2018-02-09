#include <stdio.h>

int imin(int,int);	//函数原型，括号中为形式参数，这里省略参数名；

int main(void)
{
	int evil1, evil2;

	printf("Enter a pair of integers (q to quit):\n");
		while (scanf("%d %d", &evil1, &evil2) == 2)
		{
			printf("The lesser of %d and %d is %d.\n",evil1 ,evil2, imin(evil1,evil2));	//函数调用，括号中为实际参数
			printf("Enter a pair of integers (q to quit):\n");
		} 
		printf("Bye.\n");
		return 0;
}

int imin(int n, int m)	//函数定义，括号中也是形式参数，对应实际参数的值。
{
	int min;	//局部变量，仅在此函数中有效，其它函数同名不冲突。
	if (n < m)
		min = n;
	else
		min = m;
	return min;	//返回给函数调用的值，这里的min = imin(evil1,evil2)
}
