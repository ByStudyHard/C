#include <stdio.h>
/* 输入包裹的重量，计算并显示输出相应的费用。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

main()
{
	int  price, w;
	float weight, cost, discount, discount_amount;
	weight = cost = 0;
	price = 5;
	
	printf("请输入包裹的重量，可以精确到小数点后两位（单位：Kg）：\n");
	scanf("%f",&weight);
	w = (int)weight;
    
	if (w > 0){    
		switch (w) {
	    		case 0: case 1: case 2: case 3: case 4:
	    			discount = 0.05;
		   		break;
	    		case 5: case 6: case 7: case 8: case 9:
	    			discount = 0.075;
		   		break;
	    		case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
		    		discount = 0.1;
		    		break;
		    	default:
		    		discount = 0.15;
	    			break; 
		}
		cost = weight * price * (1.0 - discount);	
		discount_amount = weight * price * discount;
		printf("重  量：%6.2f Kg\n总价格：%6.2f 元\n共优惠：%6.2f 元\n",weight,cost,discount_amount);
	}
	else {
		printf("输入错误，程序运行结束");
	}	
	return 0;
}
