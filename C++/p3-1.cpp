/* 例3-1 传对象不会改变原来对象数据成员值的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#include <iostream>
#include <string>			 //引入string类的头文件
using namespace std;
void swap(string,string);		 //使用string类的对象作为函数参数
int main()
{
	string str1("现在"),str2("过去");//定义对象str1和str2并初始化赋值
	swap(str1,str2);		 //用传值方式传递str1和str2的数据成员值
	cout << "返回后：str1 = " << str1 << " str2 = " << str2 << endl;
//	cout << str1 << "\t" << str2 << endl;
//	str1.swap(str2);
//	cout << str1 << "\t" << str2 << endl;
	return 0;
}
void swap(string s1,string s2)
{
	string temp = s1;
	s1 = s2;
	s2 = temp;
	cout << "交换为：str1 = " << s1 << " str2 = " << s2 << endl;
}
