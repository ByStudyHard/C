#include <stdio.h>

main()
{
	int a = 2, b = 3, c = 0;
	
	printf("%.1f",(a==b>1)+(a&&!c)+b/a*2.0);
}
