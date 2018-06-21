#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int main()
{
    string num[10]= {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int n,temp;
    cin>>n;
    if(n < 0)
    {
        cout<<"fu"<< ' ';
        n = -n;
    }
    temp = n;
    int a[10];
    int cnt = 0;
    while(n)
    {
        a[cnt++] = n%10;
        n/=10;
    }
    for(int i = cnt -1; i >= 0; i--)
    {
        cout<<num[a[i]];
        if(i != 0)
            cout<< ' ';
    }
    if(temp == 0)
        cout<<num[0];
    return 0;
}
