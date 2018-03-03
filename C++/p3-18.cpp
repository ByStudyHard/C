/* 例3-17 使用显示规则和关键字typename编制函数模板的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
template <typename T>				//使用typename替代class
T max1(T m1,T m2)				//求最大值
{
	return(m1 > m2)?m1:m2;
}
template <typename T>				//必须重写
T min1(T m1,T m2)				//求最小值
{
	return(m1 < m2)?m1:m2;
}
int main()
{
	cout << max1("ABC","ABD") << "," << min1("ABC","ABD") << "," 
	     << min1('W','T') << "," << min1(2.0,5.);
	cout << "\t" << min1<double>(8.5,6) << "," << min1(8.5,(double)6) 
	     << "," << max1((int)8.5,6);
	cout << "\t" << min1<int>(2.3,5.8) << "," << max1<int>('a','y') 
	     << "," << max1<char>(95,121) << endl;
	return 0;
}

