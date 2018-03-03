/* 例2-9 演示将美国格式的日期转换为国际格式的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#include <iostream>
#include <string>			//引入string类的头文件
using namespace std;
//void main()				//书中写法，编译错误
int main()				//新的标准写法
{
	cout << "Enter the date in American format "
	     << "(e.g.,December 25,2002):";
	string Date;
	getline(cin,Date,'\n');
	int i = Date.find(" " );
	string Month = Date.substr(0,i);
	int k = Date.find(",");
	string Day = Date.substr(i + 1,k - i - 1 );
	string Year = Date.substr(k + 2,4);
	string NewDate = Day + " " + Month + " " + Year;
	cout << "Original date:" << Date << endl;
	cout << "Converted date:" << NewDate << endl;
	return 0;			//新的标准写法
}
