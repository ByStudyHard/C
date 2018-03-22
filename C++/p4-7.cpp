/* 例4-7 设计构造函数的默认参数。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
class Point
{
	private:
		int x,y;
	public:
		Point(int = 0,int = 0);	//声明两个参数均为默认参数
		~Point();		//声明析构函数
		Point(Point &);		//声明复制构造函数
};
Point :: Point(int a,int b):x(a),y(b)	//定义带两个参数的构造函数
{
	cout << "Initializing " << a << "," << b << endl;
}
Point :: ~Point()			//定义析构函数
{
	cout << "Destructor is active" << endl;
}
Point :: Point(Point & t)
{
	x = t.x;
	y = t.y;
	cout << "Copy constructor " << x << "," << y << endl;
}
int main()
{
	Point A;			//构造函数产生对象A
	Point B(15,25);			//构造函数产生对象B
	Point C[2];			//构造函数产生对象数组C
	Point D(B);
}
