#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    vector<int>a(105);
    int temp;
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&temp);
        a[temp]++;
    }
    int k;
    scanf("%d",&k);
    
    for(int i = 0; i < k; i++)
    {
        scanf("%d",&temp);
        if(i)
            cout<<' ';
        printf("%d",a[temp]);
    }
    return 0;
}
