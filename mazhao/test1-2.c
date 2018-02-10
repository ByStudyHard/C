#include <stdio.h>
/* 输入包裹的重量，计算并显示输出相应的费用。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
//互评作业,printf单一出口修改
int main()
{
	float cost, weight,discount;
	printf("请输入重量(Kg)：");
	scanf("%f",&weight) ;
	switch((int)weight/5){
		case 0:
			discount = 5.0;
			cost = 0.95 * weight * 5;
	 		break;
		case 1: 
			discount = 7.5;
			cost = 0.925 * weight * 5;
			break;
		case 2: 
			discount = 10.0;
			cost = 0.9 * weight * 5;
			break;
		case 3: 
			discount = 12.5;
			cost = 0.875 * weight * 5;
			break;
		default :
			discount = 15.0;
			cost = 0.85 * weight * 5;
			break;
	}
	printf("重量%.2f公斤，折扣%.2f%%，价格为：%.2f元\n",weight,discount,cost); 
}
