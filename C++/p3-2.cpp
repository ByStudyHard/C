/* 例3-2 使用对象指针作为函数参数的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#include <iostream>
#include <string>			 //引入string类的头文件
using namespace std;
void swap(string *,string *);		 //使用string类的指针作为函数参数
int main()
{
	string str1("现在"),str2("过去");//定义对象str1和str2并初始化赋值
	swap(&str1,&str2);		 //用传地址值方式传递str1和str2的地址值
	cout << "返回后：str1 = " << str1 << " str2 = " << str2 << endl;
	return 0;
}
void swap(string * s1,string * s2)	//string类的对象s1和s2作为函数参数
{
	string temp = * s1;
	*s1 = * s2;
	*s2 = temp;
	cout << "交换为：str1 = " << * s1 << " str2 = " << * s2 << endl;
}
