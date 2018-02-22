/* 例2-2 使结构具有封装性的实例。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
struct Point
{
	private:			//产生封装性，本程序去掉此行可编译通过
		double x,y;		//数据成员
	public:
		void Setxy(double a,double b)	//成员函数，用来重新设置数据成员
		{x = a; y = b;}
		void Display()		//成员函数，按指定格式输出数据成员的值
		{cout << x << "\t" << y << endl;}
};

//void main()
int main()
{
	Point a;			//定义对象a
	a.Setxy(10.6,18.5);		//设置对象a的数据成员
	a.Display();			//显示对象a的数据成员
	cout << a.x << "\t" << a.y << endl;
	return 0;
}
