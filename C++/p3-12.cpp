/* 3.3.内联函数演示程序。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
inline int isnumber(char c)
{
	return (c >= '0' && c <= '9') ? 1 : 0;
}
int main()
{
	char c;
	cin >> c;
	if(isnumber(c))
		cout << "You entered a digit" << endl;
	else
		cout << "You entered a non-digit" << endl;
	return 0;
}
