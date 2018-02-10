#include <stdio.h>
/* 输入包裹的重量，计算并显示输出相应的费用。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

//互评作业
int main()
{
 double weight, cost = 5.0;
 printf("****************************************\n"
     "**  运费标准:                         **\n"
     "**  1.按货物重量收费。                **\n"
      "**  2.收费标准5元/kg。                **\n"
     "**  3.货物多多折扣多多哦！            **\n"
        "****************************************\n");
 printf( "请输入您货物的重量，以kg为单位。\n");
 scanf("%lf", &weight);
    switch((int)(weight/5))//
 {
 case(0):printf("您的运费为%.2lf\n", cost = weight*(cost - cost * 0.05)); break;
 case(1):printf("您的运费为%.2lf\n", cost = weight*(cost - cost * 0.075)); break;
 case(2):printf("您的运费为%.2lf\n", cost = weight*(cost - cost * 0.1)); break;
 case(3):printf("您的运费为%.2lf\n", cost = weight*(cost - cost * 0.125)); break;
 default:printf("您的运费为%.2lf\n", cost = weight*(cost - cost * 0.15)); break;
 }
    return 0;
}
