#include <string>
#include <sstream>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int pos,point;
	cin>>s;
	if (s[0] == '-')
	{
		cout<<'-';
	}
	for (int i = 1; i < s.length(); ++i)
	{
		point++;
		if (s[i] == 'E')
		{
			pos = i;
			break;
		}
	}
	point--;
	// cout<<point<<endl;
	string str = s.substr(1,pos-1);
	// <<str<<endl;
	int number = stoi(s.substr(pos+1));//获取指数
	// cout<<number;
	if(number < 0)
	{
		cout<<"0.";
		for (int i = 1; i < abs(number)-point; ++i)
		{
			cout<<'0';
		}
		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i] != '.')
			{
				cout<<str[i];
			}
		}
	}
	else
	{
		for (int i = 0; i < str.length(); ++i)
		{
			if(str[i] != '.')
				cout<<str[i];
		}
		for (int i = 1; i < number-point; ++i)
		{
			cout<<'0';
		}
	}

	return 0;
}