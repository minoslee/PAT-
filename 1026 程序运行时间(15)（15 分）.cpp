#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int c1,c2;
	cin>>c1>>c2;
	int c = (c2-c1)*1.0/100+0.5;
	int sec,min,hour;
	hour = int(c/3600);
	c%=3600;
	min = int(c/60);
	c%=60;
	sec = int(c);
	printf("%02d:%02d:%02d\n",hour,min,sec );
	return 0;
}