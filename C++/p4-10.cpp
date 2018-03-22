/* 例4-10 构造一个求4个正整数中最大者的类Max，并用主程序验证它的功能。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
class Max					//声明类
{
	private:				//封装数据成员和成员函数
		int a,b,c,d;			//数据成员
		int Maxi(int,int);		//只允许类内部的成员函数调用
	public:					//对外界的接口
		void Set(int,int,int,int);	//设置对象初值
		int Maxi();			//求最大值
};//A[3];					//声明类的对象数组，定义结束；
//类中成员函数的实现
int Max::Maxi(int x,int y)			//求两个数的最大值
{
	return (x > y) ? x : y;
}
void Max::Set(int x1,int x2,int x3 = 0,int x4 = 0)	//使用两个默认参数
{
	a = x1;
	b = x2;
	c = x3;
	d = x4;
}
int Max::Maxi()
{
	int x = Maxi(a,b);
	int y = Maxi(c,d);
	return Maxi(x,y);
}
int main()
{
	Max A[3];				//等同于类定义后的对象数组声明	
	A[0].Set(12,45,76,89);			//为数组对象A[0]置初值
	A[1].Set(12,45,76);
	A[2].Set(12,45);
	for(int i = 0;i < 3;i++)
		cout << A[i].Maxi() << " ";
	cout << endl;
	return 0;
}
