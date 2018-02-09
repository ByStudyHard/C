#include <stdio.h>
#include <string.h>

// strlen函数：返回s的长度

main()
{
	char a;

	scanf("%s",&a);
	printf("%s",strlen(a));

	return 0;
}
/*
int strlen1(char s[])
{
	int i = 0;

	while (s[i] != '\0')
		++i;
	return i;
}
*/
