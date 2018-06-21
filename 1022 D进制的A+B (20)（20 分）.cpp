#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,d;
	cin>>a>>b>>d;
	int s[105] = {0};
	int num = a + b;
	if (!num)
	{
		cout<<0<<endl;
		return 0;
	}
	int cnt = 0;
	while(num)
	{
		s[cnt++] = num%d;
		num/=d;
	}
	for (int i = cnt - 1; i >= 0; --i)
	{
		cout<<s[i];
	}
	return 0;
}