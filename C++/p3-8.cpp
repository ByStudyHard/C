/* 例3-8 返回引用的函数。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
int a[] = {2,4,6,8,10,12};			//全局数组
int& index(int i);				//返回引用的函数原型声明

int main()
{
	cout << a[3] << endl;
	index(3) = 16;				//将a[3]改为16
	cout << index(3) << endl;		//输出16
	a[3] = 61;
	cout << a[3] << endl;
	return 0;
}
int& index(int i)				//函数定义
{
	return a[i];				//返回指定下标的整数数组内容
}
