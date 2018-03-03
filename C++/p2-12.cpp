/* 例2-12 演示string对象使用成员函数表示存储区间的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
#include <string>				//引入string类的头文件
#include <algorithm>				//引入算法头文件
#include <iterator>			
#include <functional>
using namespace std;
//void main()					//书中写法，编译错误
int main()					//新的标准写法
{
	string str1 = "wearehere!",str2(str1);	//使用str1初始化str2
	reverse(str1.begin(),str1.end());	//字符串元素逆向
	cout << str1 << endl;			//输出str1
	copy(str1.begin(),str1.end(),str2.begin());
						//原样复制到str2,str2应能容纳下
	sort(str1.begin(),str1.end());		//str1默认升幂排序
	cout << str1 << endl;			//输出str1排序结果
	cout << str2 << endl;			//输出字串str2的内容
	reverse_copy(str1.begin(),str1.end(),str2.begin());
						//逆向将str1复制到字串str2
	cout << str2 << endl;			//输出逆向后的str2的内容
	reverse(str2.begin() + 2,str2.begin() + 8);
						//字串str2部分逆向
	copy(str2.begin() + 2,str2.begin() + 8,ostream_iterator <char> (cout));
						//输出逆向后的部分内容
//	reverse_copy(str2.begin() + 2,str2.begin() + 8,ostream_iterator <char> (cout));						//输出逆向后的str2的部分内容
	cout << endl;
	sort(str1.begin(),str1.end(),greater<char>());
						//降幂排序
	cout << str1 << endl;			//输出排序后的字串str1
	str1.swap(str2);			//互相交换内容
	cout << str1 << " " << str2 << endl;
	cout << (*find(str1.begin(),str1.end(),'e') == 'e') << " "
	     << (*find(str1.begin(),str1.end(),'O') == 'O') << endl;
						//注意不是成员函数find
	return 0;				//新的标准写法
}
