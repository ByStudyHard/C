#include <stdio.h>

main()
{
	int x, y;
	scanf("%d",&x);

	if (x == 0)
		y = 0;
	else if (x > 0)
		y = 1;
	else
		y = -1;

	printf("%d",y);
}
