/* 例1-6 演示数组升幂排序、复制、逆向、和输出等操作的例子。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/
#include <iostream>
#include <algorithm>			//引入新的头文件
#include <iterator>			//书中未引入，编译错误
using namespace std;
//void main()				//书中写法，编译出错
int main()				//新的标准写法
{
	double a[] = {1.1,4.4,3.3,2.2},b[4];
	//正向输出数组a，以空格隔开
	copy(a,a + 4,ostream_iterator<double>(cout," "));
		cout << endl;
	//逆向输出数组a，以空格隔开			
	reverse_copy(a,a + 4,ostream_iterator<double>(cout," "));
		cout << endl;
	//原样复制到数组
	copy(a,a + 4,b);
	//正向输出数组b，以空格隔开
	copy(b,b + 4,ostream_iterator<double>(cout," "));
		cout << endl;
	//对数组a进行升幂排序
	sort(a,a + 4);
	//输出数组a
	copy(a,a + 4,ostream_iterator<double>(cout," "));
		cout << endl;
	//将a的内容按逆向复制给数组b
	reverse_copy(a,a + 4,b);
	//输出数组b
	copy(b,b + 4,ostream_iterator<double>(cout," "));
		cout << endl;
	return 0;			//新的标准写法
}
