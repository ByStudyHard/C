/* 例5-4 使用友元函数计算两点距离的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
#include <cmath>				//也可以使用头文件<math.h>
using namespace std;
class Point{
	private:
		double X, Y;
	public:
		Point(double xi, double yi){X = xi, Y = yi;}
		double GetX(){return X;}
		double GetY(){return Y;}
		friend double distances(Point&,Point&);	//声明友元函数
};
double distances(Point& a, Point& b)		//像普通函数一样定义友元函数
{
	double dx = a.X - b.X;			//可以访问对象a的成员
	double dy = a.Y - b.Y;			//可以访问对象b的成员
	return sqrt(dx * dx + dy * dy);
}

int main()
{
	Point p1(3.5,5.5),p2(4.5,6.5);
	cout << "The distance is " << distances(p1,p2) << endl;
}
