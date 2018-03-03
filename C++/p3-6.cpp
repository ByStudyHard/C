/* 例3-6 设计一个根据参数数量输出信息的函数。
 * 学生：学Bug
 * 微信公众号：ByStudyHard	*/

#include <iostream>
#include <string>
using namespace std;
void Display(string s1,string s2="",string s3 = "");
int main()
{
	string str1("现在"),str2("过去"),str3("将来");
	Display(str1);
	Display(str1,str2,str3);
	Display(str3,str1);
	Display(str2,str3);
	return 0;
}
void Display(string s1,string s2,string s3)
{
	if(s2 == "" && s3 == "")
		cout << s1 << endl;
	else if (s3 == "" && s2 != "")
		cout << s1 << "、" << s2 << endl;
	else
		cout << s1 << "、" << s2 << "、" << s3 << endl;
}
