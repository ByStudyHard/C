/* 例3-14 编制求两个数据中的最大值的函数模板程序。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
template <class T>
T max1(T m1,T m2)
{
	return(m1 > m2) ? m1 : m2;
}
int main()
{
	cout << max1(2,5) << "\t" << max1(2.0,5.) << "\t"
	     << max1('w','a') << "\t" << max1("ABC","ABD") << endl;
	return 0;
}

