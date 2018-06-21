#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <set>

using namespace std;
int main(int argc, char const *argv[])
{
	int ans[25];
	int n,temp;
	set<int>s1,s2;
	cin>>n;
	for(int i = 0; i < n; i++)
    {
        cin>>temp;
        s1.insert(temp);
    }
    for(set<int>::iterator it = s1.begin(); it != s1.end(); it++)
    {
        cout<<(*it)<<endl;
    }

    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        s2.insert(temp);
    }

    for(set<int>::iterator it = s1.begin(); it != s1.end(); it++)
    {
        int flag = 0;
        for(set<int>::iterator itt = s2.begin(); itt != s2.end() ;itt++)
        {
            if((*it) == (*itt))
            {
                flag = 1;
                break;
            }
        }

    }
    return 0;
    /*
    int t = n;
    cin>>n;
    for(int j = 0; j < n; j++)
    {
        scanf("%d",&b[j]);
    }
    int ans[20];
    int flag = 0,pos = 0;
    for(int i = 0; i < t; i++)
    {
        flag = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[i] == b[j])
             {
                 flag = 1;
                 break;
             }
        }
        if(flag == 0)
        {
            ans[pos++] = a[i];

        }
    }
    */
}
