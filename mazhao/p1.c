#include <stdio.h>

//关于除法，除数与被除数异号时，商向零方向取整。

main()
{
	int a ,b, c;
	printf("请输入被除数与除数，用空格隔开，如5 10\n");
	scanf("%d %d",&a,&b);
	c = a / b;
	printf("计算结果：%d\n",c);
}
