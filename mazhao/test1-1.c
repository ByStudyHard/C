#include <stdio.h>
/* 输入包裹的重量，计算并显示输出相应的费用。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

//互评作业
#include<stdio.h>
int main()
{
	double cost;
	float weight;

	printf("请输入重量(Kg)：");
	scanf("%f",&weight) ;

	switch(((int)weight)/5){
		
		case 0:
			cost=0.95*weight*5;
			printf("\n重量%.2f公斤，折扣5%%，价格为：%.2f元\n",weight,cost); 
	 		break;
	
		case 1: 
			cost=0.925*weight*5;
			printf("\n重量%.2f公斤，折扣7.5%%，价格为：%.2f元\n",weight,cost); 
			break;
	
		case 2: 
			cost=0.9*weight*5;
			printf("\n重量%.2f公斤，折扣10%%，价格为：%.2f元\n",weight,cost); 
			break;
	
		case 3: 
			cost=0.875*weight*5;
			printf("\n重量%.2f公斤，折扣12.5%%，价格为：%.2f元\n",weight,cost); 
			break;
	
		default :
			cost=0.85*weight*5;
			printf("\n重量%.2f公斤，折扣15%%，价格为：%.2f元\n",weight,cost); 
			break;
	}

}
