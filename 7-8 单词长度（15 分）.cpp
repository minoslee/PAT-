#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int cnt = 0;
    char c;
    int flag = 0;
    int ans[105] = {0};
    int pos = 0;
    while((c = getchar()) != '.')
    {
        if(c != ' ')
        {
            flag = 0;
            cnt++;
            //cout<<c<<endl;
        }
        else if(c == ' ')
        {
            if(flag == 1)
                continue;
            ans[pos++] = cnt;
            flag = 1;
            cnt = 0;
        }
    }
    if(cnt)
        ans[pos++] = cnt;
    for(int i = 0; i < pos; i++)
    {
        if(i)
            cout<<' ';
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
