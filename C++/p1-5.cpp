/* 例1-5 间接引用数组的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
using namespace std;
typedef double array[10];

//void main()				//书中写法，编译出错
int main()				//新的标准写法
{
	array a = {12,34,56,78,90,98,76,85,64,43};
	array &b = a;
	a[2]= 100;			//操作数组a
	for(int i = 0;i < 10;i++)	//数组b与数组a同步变化；
		cout << b[i]<<" ";
	cout << endl;
	return 0;			//新的标准写法
}
