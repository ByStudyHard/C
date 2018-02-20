/* 例1-2 函数重载产生动态性的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;

int max(int,int);				//两个整型参数的函数原型
int max(int,int,int);				//三个整型参数的函数原型

//void main()					//书中写法，但编译错
main()
{
	cout << max(35,25) << "," << max(25,39,35) << endl;
}

int max(int m1, int m2)
{
	return (m1 > m2)?m1:m2;
}

int max(int m1, int m2, int m3)
{
	int t = max (m1,m2);
	return max(t,m3);
}
