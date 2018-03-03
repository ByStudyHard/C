/* 例3-7 不允许改变作为参数传递的字符串内容的实例。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
#include <string>
using namespace std;

void change(const string &);
int main()
{
	string str("Can you change it?");
	change(str);
	cout << str << endl;
}

void change(const string &s)
{
	string s2 = s + " No !";
	cout << s2 << endl;
}
