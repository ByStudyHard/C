/* 例4-4 构造函数的定义和执行过程实例程序。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
class Point
{
	private:
		int x,y;
	public:
		Point();		//使用参数列表声明不带参数的构造函数
		Point(int,int);		//带两个参数的构造函数
};
Point :: Point():x(0),y(0)		//定义不带参数的构造函数
{
	cout << "Initializing default" << endl;
}
Point :: Point(int a,int b):x(a),y(b)	//定义带两个参数的构造函数
{
	cout << "Initializing " << a << "," << b << endl;
}
int main()
{
	Point A;			//使用不带参数的构造函数产生对象A
	Point B(15,25);			//使用带参数的构造函数产生对象B
	Point C[2];			//使用不带参数的构造函数产生对象数组C
	Point D[2] = {			//使用带参数的构造函数产生对象数组D
		Point(5,7),Point(8,12)
	};
}
