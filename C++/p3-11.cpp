/* 例3-11 函数返回值作为函数的参数。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
int max(int,int);				//2个整型参数的函数原型
int main()
{
	cout << max(55,max(25,39)) << endl;
	return 0;
}
int max(int m1,int m2)
{
	return(m1 > m2) ? m1 : m2;
}
