/*
令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

输入格式：

输入在一行中给出M和N，其间以空格分隔。

输出格式：

输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    int ans[1005];
    int cnt = 0;
    int pos = 0;
    for(int i = 2; ; i++)
    {
        if(prime(i) == true)
        {
            cnt++;
            if(cnt >= a && cnt <= b)
            {
                ans[++pos] = i;
                //cout<<"pos"<<pos<<endl;
            }
        }
        if(cnt > b)
            break;
    }
    cnt = 1;
    for(int i = 1; i <= pos; i++)
    {
    	if(cnt % 10 == 1)
    	{
    		cout<<ans[i];
    	}
    	else if(cnt % 10 == 0)
    		cout<<' '<<ans[i]<<'\n';
    	else
    		cout<<' '<<ans[i];
        cnt++;
    }
    return 0;
}
