/* 例4-1 描述点的point类。
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

int main()
{
	return 0;
}
