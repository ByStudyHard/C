#include <stdio.h>
//#include <string.h>
/* 练习2-4 重新编写函数squeeze(s1,s2)，将字符串s1中任何与字符串s2中字符匹配的字符都删除。
 *
 * 学生：学Bug
 * 微信公众号：ByStudyHard      */

void squeeze(char s1[],char s2[]);

main()
{
	char s1[20], s2[10];
	scanf("%s %s",s1,s2);
//	char s1[] = "abcddeffghijkk";
//	char s2[] = "bdfk";
	printf("%s %s\n",s1,s2);
	squeeze(s1,s2);
	printf("%s\n",s1);
	return 0;
}
void squeeze(char s1[],char s2[])
{
	int i, j, k;

	for (i = k = 0; s1[i] != '\0';i++){
		for (j = 0; s2[j] != '\0' && s2[j] != s1[i];j++)
			;
		if (s2[j] == '\0')
			s1[k++] = s1[i];
	}
	s1[k] = '\0';
}

