/*
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string num[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	string s;
	cin>>s;
	int sum = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		sum = sum + s[i] - '0';
	}
	int cnt = 0;
	int temp = sum;
	int ans[50] = {0};
	while(temp)
	{
		ans[cnt++] = temp%10;
		temp /= 10;
	}
	for(int i = cnt - 1; i >= 0; --i)
	{
		cout<<num[ans[i]];
		if(i != 0)
			cout<<' ';
	}
	return 0;
}
