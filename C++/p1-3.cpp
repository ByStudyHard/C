/* 例1-3 演示使用new和delete的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;

//void main()				//书中写法，编译出错
main()
{
	double *p;			//声明double型指针
	p = new double[3];		//分配3个double型数据的存储空间
	for(int i = 0;i < 3;i++){	//定义对象i的初值为0
		cin >> *(p + i);	//将输入数据存入指定地址
	}				//用{}将两个for语句括起来解决编译错误
	for(int i = 0;i < 3;i++){
		cout << *(p + i) << " ";//将地址里的内容输出
	}
	delete p;
}
