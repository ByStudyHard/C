/* 例3-4 使用“引用形参”作为函数参数的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#include <iostream>
#include <string>
using namespace std;
void swap(string &,string &);		 //使用string类的引用对象作为形参
int main()
{
	string str1("现在"),str2("过去");//定义对象str1和str2并初始化赋值
	swap(str1,str2);		 //传递对象的名字：str1和str2
	cout << "返回后：str1 = " << str1 << " str2 = " << str2 << endl;
	return 0;
}
void swap(string &s1,string &s2)	 //string类的引用对象s1和s2作为函数参数
{
	string temp = s1;
	s1 = s2;
	s2 = temp;
	cout << "交换为：str1 = " << s1 << " str2 = " << s2 << endl;
}
