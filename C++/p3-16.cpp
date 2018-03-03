/* 例3-15 编写具有复数complex模板类参数的重载函数实例。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
#include <complex>
#include <string>
using namespace std;
void printer(complex <int>);
void printer(complex <double>);
int main()
{
	int i(0);
	complex <int> num1(2,3);
	complex <double> num2(3.5,4.5);
	printer(num1);
	printer(num2);
	return 0;
}

void printer(complex <int> a)
{
	string str1("real is "),str2 = "image is ";
	cout << str1 << a.real() << ',' << str2 << a.imag() << endl;
}

void printer(complex <double> a)
{
	string str1("real is "),str2 = "image is ";
	cout << str1 << a.real() << ',' << str2 << a.imag() << endl;
}
