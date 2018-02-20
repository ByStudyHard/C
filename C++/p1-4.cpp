/* 例1-4 演示引用的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;

//void main()				//书中写法，编译出错
int main()				//新的标准写法
{
	int x = 56;			//定义并初始化x
	int & a = x;			//声明a是x的引用，a和x的地址相同
	int & r = a;			//r又是a的引用，三个地址相同
	
	cout << "x=" << x << ",&x=" << &x << ",a=" << a << ",&a=" << &a << ",r=" << r << ",&r=" << &r << endl;
	r = 25;				//改变r，则a和x都同步变化
	cout << "x=" << x << ",&x=" << &x << ",a=" << a << ",&a=" << &a << ",r=" << r << ",&r=" << &r << endl;
	return 0;			//新的标准写法
}
