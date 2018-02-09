#include <stdio.h>
/* 练习2-5 编写函数any(s1,s2)，将字符串s2中的任一字符在字符串s1中第一次出现的位置作为结果返回。如果s1中不包含s2中的字符，则返回-1.（标准库strpbrk具有同样的功能，但它返回的是指向该位置的指针。）。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard      */

int any(char s1[],char s2[]);

main()
{
	char s1[20], s2[10];
	scanf("%s %s",s1,s2);
	printf("%s %s\n",s1,s2);
//	i = any(s1,s2);
//	printf("%d\n",i);
	printf("%d\n",any(s1,s2));	//返回值不为空
	return 0;
}
int any(char s1[], char s2[])
{
	int i, j;
	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s2[j] != '\0'; j++)
			if (s1[i] == s2[j])
				return i;
	return -1;
}
