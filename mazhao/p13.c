#include <stdio.h>
/* 输出钻石图
 * 学生：学Bug
 * 微信公众号：ByStudyHard。	*/

main()
{
	int i,n;
	int j;  //添加变量j解决昨天的死循环；
	int b;	//输出空格解决居中问题；

	printf("请输入一个整数定义钻石图的最大宽度：");
	scanf("%d",&n);	//作业题图中最大为7，这里扩展为无限大；
//	n = 7;	

	//for循环控制单行输出星号，双行输出回车；
	for(i = 1;i < 2 * n; i++){
		if (i % 2 == 0)
			printf("\n");
		else if(i < n){
			j = i;
			b = (n - j) / 2 + 4;	//+4可以将整体右移三个空格；
			//for循环控制星号的输出个数；
			for(;j > 0;j--){
				//while循环控制空格输出，解决居中；
				while(b > 0){
					printf(" ");
					b--;
				}
				printf("*");
			}
			printf("\n");
		}else{
		//钻石图下部分
			j = i - n;
			b =  j / 2 + 4;
			
			for(;j < n;j++){
				while(b > 0){
					printf(" ");
					b--;
				}
				printf("*");
			}
			printf("\n");
		}
	}
//	printf("\n");
	return 0;
}
