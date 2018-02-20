/* 例1-7 演示数组降幂、查找和输出等操作的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>			//书中未引入，编译错误
using namespace std;
//void main()				//书中写法，编译出错
int main()				//新的标准写法
{
	double a[] = {1.1,4.4,3.3,2.2},b[4];
	//对数组a进行升幂排序
	sort(a,a + 4);
	//输出数组a
	copy(a,a + 4,ostream_iterator<double>(cout," "));
		cout << endl;
	//对数组a进行降幂排序
	sort(a,a + 4,greater<double>());
	//输出数组a
	copy(a,a + 4,ostream_iterator<double>(cout," "));
		cout << endl;
	//查找	
	double * x = find(a,a+4,4.4);
	if(x == a+4)
		cout << "没有值为4.4的数组元素";
	else
		cout << "有值为"<< *x << "的数组元素";
	cout << endl;
	//x是double类型的指针
	x = find(a,a+4,8);
	if (x == a+4)
		cout << "没有值为8的数组元素";
	else
		cout << "有值为"<< *x << "的数组元素";
	cout << endl;
	return 0;			//新的标准写法
}
