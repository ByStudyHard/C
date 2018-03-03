/* 例3-14 编制求两个数据中的最大值的函数模板程序。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
template <class T>
T max(T m1,T m2)
{
	return(m1 > m2) ? m1 : m2;
}
int main()
{
	cout << max(2,5) << "\t" << max(2.0,5.) << "\t"
	     << max('w','a') << "\t" << max("ABC","ABD") << endl;
	return 0;
}

