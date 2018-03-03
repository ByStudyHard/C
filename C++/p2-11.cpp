/* 例2-11 演示string对象的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#include <iostream>
#include <string>			//引入string类的头文件
#include <algorithm>			//引入算法头文件
#include <iterator>			
using namespace std;
//void main()				//书中写法，编译错误
int main()				//新的标准写法
{
	string str1 = "we are here!",str2 = str1;
	reverse(&str1[0],&str1[0] + 12);	//str1字符串的元素逆向
	cout << str1 << endl;			//输出str1
	copy(&str1[0],&str1[0] + 12,&str2[0]);	//原样复制到str2
	cout << str2 << endl;			//输出str2
	reverse_copy(&str2[0],&str2[0] + 12,ostream_iterator <char> (cout));
	cout << endl;
	//上两句等同于下两句，但上一句要引入<iterator>头文件，书本中未说明
//	reverse(&str2[0],&str2[0] + 12);
//	cout << str2 << endl;
	return 0;			//新的标准写法
}
