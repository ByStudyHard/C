/* 例4-2 根据上面对Point类的定义，演示使用Point类的对象。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
class Point					//类名Point，习惯首字母大写
{
	private:				//声明为私有访问权限
		int x,y;			//私有数据成员，不能初始化赋值
	public:					//声明为公有访问权限
		void Setxy(int a, int b);	//无返回值的共有成员函数
		void Move(int a, int b);
		void Display();
		int Getx();
		int Gety();		
};						//类声明以分号结束
void print(Point a)
{
	a.Display();
}
int main()
{
	Point A,B;
	A.Setxy(25,55);
	B = A;
	A.Display();
	A.Move(-10,20);
	print(A);
	print(B);
	cout << A.Getx() << endl;
	return 0;
}
void Point :: Setxy(int a,int b){x = a;	y = b;}
void Point :: Move(int a, int b){x = x + a;y = y + b;}
void Point :: Display(){cout << x << "," << y << endl;}
int Point :: Getx(){return x;}
int Point :: Gety(){return y;}
