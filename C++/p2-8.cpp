/* 例2-8 演示使用string对象及初始化的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard
 *	*/

#include <iostream>
#include <string>			//引入string类的头文件
using namespace std;
//void main()				//书中写法，编译错误
int main()				//新的标准写法
{
	string str1("We are here!");
	string str2 = "Where are you";
	cout << str1[0] << str1[11] << "," << str1 << endl;
	cout << str2[0] << str2[13] << "," << str2 << endl;
	cout << "please input a word:";
	cin >> str1;
	cout << "length of the" << " is "<< str1.size() << "." << endl;
	return 0;			//新的标准写法
}
