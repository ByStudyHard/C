#include <stdio.h>
/*输入包裹的重量，计算并显示输出相应的费用。*/

main()
{
    double a, weight, discount, price, cost;
    weight = cost = 0;
    price = 5;
	
    printf("请输入包裹的重量，精确到小数点后两位（单位：Kg）：");
    scanf("%f",&a);
    
    switch (weight == a) {
    	case '0': case '1': case '2': case '3': case '4':
    		discount = 0.05;
    		break;
    	case '5': case '6': case '7': case '8': case '9':
    		discount = 0.075;
    		break;
    	case '10': case '11': case '12': case '13': case '14': case '15': case '16': case '17': case '18': case '19':
    		discount = 0.1;
    		break;
    	case '20':
    		discount = 0.15;
    		break; 
	}
	cost = weight * price * (1.0 - discount);
	
	printf("重量：%f,总价格：%f",weight,cost);

}
