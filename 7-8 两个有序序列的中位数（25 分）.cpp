#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[100005],b[100005];
int n;
void merg()
{
    int i = 0, j = 0;
    while(i + j < n-1)
    {
        if(a[i] > b[j])
            j++;
        else
            i++;
    }
    if(a[i] < b[j])
        cout<<a[i];
    else
        cout<<b[j];
}
int main(int argc, char const *argv[])
{
	cin>>n;
	for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    merg();

	return 0;
}

