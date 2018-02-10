#include <stdio.h>
/* 简易的字符统计器
 * */

int main()
{ 
	int max,letter, space, other; 
	char ch; 
	int flag = 1;
	max = letter = space = other = 0;
	while(flag)
	{
		printf("请输入大、小写字母、空格，不超过30个字符，不包含其他字符：\n");
		while ((ch = getchar ()) != '\n') 
		{
		        if (ch>='a' && ch <= 'z') letter++;   
		        else if (ch>='A' && ch<='Z') max++;
		        else if (ch == ' ') space++;  
		        else   other++; 
		} 
		if(other>0) 
		{
		        flag=1;
		        max = letter = space = other = 0;
		        printf("包含其他字符，请按要求重新输入字符！\n"); 
		}
		else if(max+letter+space+other>30) 
		{
		        flag=1;
		        max = letter = space = other = 0;
		        printf("超过字符数量限制，请按要求重新输入字符！\n");
		}
		else 
		{
		flag=0;
		printf("大写字母数量：%d\n", max);
		printf("小写字母数量：%d\n", letter);
		printf("空格数量：%d\n", space); 
		}
	}
}
