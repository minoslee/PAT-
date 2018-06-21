#include <iostream>
#include <cstdio>
using namespace std;
struct node
{
    int num;
    int cnt;
}a[100005];
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i].num;
        a[i].cnt = 1;
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n ;j++)
        {
            if(a[j].num > a[j-1].num)
            {
                a[i].cnt++;
            }
            else
                break;
        }
    }
    int Max = -1;
    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i].cnt > Max)
        {
            Max = a[i].cnt;
            pos = i;
        }
    }
    for(int i = pos; i < pos + Max - 1; i++)
    {
        cout<<a[i].num<< ' ';
    }
    cout<<a[pos+Max-1].num;
    return 0;
}
