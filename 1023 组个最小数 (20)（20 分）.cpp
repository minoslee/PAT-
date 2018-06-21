#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[10],t;
	for (int i = 0; i < 10; ++i)
	{
		cin>>a[i];
	}
	for (int i = 1; i < 10; ++i)
	{
		if (a[i])
		{
			cout<<i;
			t = i;
			break;
		}
	}
	for (int i = 0; i < a[0]; ++i)
	{
		cout<<0;
	}
	
	for (int j = 0; j < a[t]-1; ++j)
	{
		cout<<t;
	}
	for (int i = t + 1; i < 10; ++i)
	{
		for (int j = 0; j < a[i]; ++j)
		{
			cout<<i;
		}
	}


	return 0;
}