/* 例2-10 演示使用complex和string对象及初始化的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#include <iostream>
#include <string>			//引入string类的头文件
#include <complex>			//引入complex类的头文件
using namespace std;
//void main()				//书中写法，编译错误
int main()				//新的标准写法
{
	complex < int > num1(2,3);
	complex < float > num2(3.5,4.5);
	string str1("real is ");
	string str2 = "image is ";
	cout << str1 << num1.real() << ',' << str2 << num1.imag() << endl;
	cout << str1 << num2.real() << ',' << str2 << num2.imag() << endl;
	return 0;			//新的标准写法
}
