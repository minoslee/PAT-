#include <iostream>
#include <string>
using namespace std;
int book[10];
int ans[10];
int n;
int f(int step)
{
    if(step == n+1)
    {
        for(int i = 1; i<=n; i++)
            cout<<ans[i];
        cout<<endl;
        return 0;
    }
    for(int i = 1; i<=n; i++)
    {
        if(book[i] == 0)
        {
            ans[step] = i;
            book[i] = 1;
            f(step+1);
            book[i] = 0;
        }
    }
    return 0;
}
int main()
{
    cin>>n;
    f(1);
    return 0;
}
