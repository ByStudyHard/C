/* 例3-16 使用类模板作为函数模板参数的程序。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
#include <complex>
#include <string>
using namespace std;
template <class T>
void printer(complex <T>a)
{
	string str1("real is "),str2 = "image is ";
	cout << str1 << a.real() << ',' << str2 << a.imag() << endl;
}
int main()
{
	int i(0);
	complex <int> num1(2,3);
	complex <double> num2(3.5,4.5);
	printer(num1);
	printer(num2);
	return 0;
}
