#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct node
{
	float number;
	float money;
	float per;
}a[1005];
bool cmp(node a ,node b)
{
	return a.per>=b.per;
}
int main(int argc, char const *argv[])
{
	int n,D;
	cin>>n>>D;
	float sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i].number;
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i].money;
		sum+=a[i].money;
		a[i].per = a[i].money*1.0/a[i].number;
	}
	if (D>=sum)
	{
		printf("%.2f\n",sum );
		return 0;
	}
	sort(a,a+n,cmp);
	float ans = 0.0;
	for (int i = 0; i < n; ++i)
	{
		if (D >= a[i].number)
		{
			D -= a[i].number;
			ans += a[i].money;
		}
		else
		{
			ans += (a[i].per*D);
			break;
		}
	}
	printf("%.2f\n",ans);
	return 0;
}