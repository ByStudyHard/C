/* 例4-3 演示使用内联函数定义Point类及使用Point类指针和引用的完整例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
class Point
{
	private:
		int x, y;
	public:
		void Setxy(int a,int b){x = a; y = b;}
		void Move(int a,int b){x = x + a; y = y + b;}
		void Display(){cout << x << "," << y << endl;}
		int Getx(){return x;}
		int Gety(){return y;}
};					//分号结束类定义，切记。
void print(Point *a)			//类指针作为print函数的参数定义重载函数
{
	a -> Display();
}
void print(Point& a)
{
	a.Display();
}
int main()				//主函数
{
	Point A,B,*p;			//声明对象和指针
	Point &RA = A;			//声明对象RA引用对象A
	A.Setxy(25,55);			//使用成员函数为对象A赋值
	B = A;				//赋值运算符为对象B赋值
	p = &B;				//类Point的指针指向对象B
	p -> Setxy(112,115);		//使用指针调用函数Setxy重新设置B的值
	print(p);			//传递指针显示对象B的属性
	p -> Display();			//再次显示对象B的属性
	RA.Move(-80,23);		//引用对象RA调用Move函数
	print(A);			//验证RA和A的同步
	print(&A);			//直接传递A的地址作为指针参数
}
