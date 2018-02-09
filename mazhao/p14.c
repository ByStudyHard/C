#include <stdio.h>

int main()

{
	float x = 2.0,y;
	if(x < 0.0)
		y = 0.0;
	else if(x < 10.0)
		y = 1.0 / x;
	else 
		y = 1.0;
	printf("%f\n",y);
	return 0;
}
