#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	int ans,s;
	while(cin>>ans>>s)
	{
		int n = ans%(s+1);
		if(!n)
		{
			printf("-1\n");
			return 0;
		}
		printf("%d\n", n);
	}
	return 0;
}