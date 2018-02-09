#include <stdio.h>

int main()
{
	int x = 10,y = 10;

	if(!x) 
		++y;
	else if(x == 0){
		if(x)
			y+=2;
		else
			y+=3;
		}
	printf("%d\n",y);
	return 0;
}
