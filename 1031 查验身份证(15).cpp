#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string id;
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char m[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
    cin>>n;
    int flag = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>id;   
        int sum = 0;
        for(int j = 0; j < id.length()-1; j++)
        {
            sum += ((id[j]-'0')*weight[j]);
        }
        int z = sum%11;
        char ch = id[17];
        if(m[z] != ch)
        {
            flag = 1;
            cout<<id<<endl;
        }
    }
    if(!flag)
    {
        cout<<"All passed"<<endl;
    }
    return 0;
}
