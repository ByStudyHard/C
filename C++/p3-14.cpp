/* 例3-13 编写一个具有默认参数的函数。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
int add(int m1 = 0,int m2 = 0,int m3 = 0,int m4 = 0)
{
	return m1 + m2 + m3 + m4;
}
int main()
{
	cout << add(1,3) << "," << add(1,3,5) << "," << add(1,3,5,7) << endl;
	return 0;
}

