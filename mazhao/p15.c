#include <stdio.h>

main()
{
	int k1 = 10,k2 = 20;		
	(k1=k1>k2)&&(k2=k2>k1);
//	printf("%d\n",k1 = k1 > k2);
//	printf("%d\n",k2 = k2 > k1);
	printf("%d\n",(k1=k1>k2)&&(k2=k2>k1));
	printf("%d %d\n",k1,k2);
}
