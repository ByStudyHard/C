#include <stdio.h>

main()
{
	unsigned int a= 3;
	int b = 6;

	if ((int)(a - b) > 0)
		printf("why?\n");
	else
		printf("Oyeh!\n");

	return 0;
}
