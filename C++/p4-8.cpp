/* 例4-8 使用Point类演示建立和释放一个动态对象数组的例子。
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
};
Point :: Point(int a,int b):x(a),y(b)	//定义带两个参数的构造函数
{
	cout << "Initializing " << a << "," << b << endl;
}
Point :: ~Point()			//定义析构函数
{
	cout << "Destructor is active" << endl;
}
int main()
{
	Point * ptr = new Point[2];
	delete []ptr;
}
