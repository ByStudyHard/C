/* 例2-13 演示string对象数组的例子。
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
	string str[] = {"We are here!","Where are you","welcome!"};
	for(int i = 0;i < 3; i++){
		copy(str[i].begin(),str[i].end(),ostream_iterator<char>(cout));
		cout << endl;
	}
	str[0].swap(str[2]);
	str[0].swap(str[1]);
	for(int i = 0; i < 3; i++)	//书中没有声明int类型 编译出错
		cout << str[i] << endl;
	return 0;			//新的标准写法
}
