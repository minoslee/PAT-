#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;


int main(int argc, char const *argv[])
{
    int a1,b1,c1,a2,b2,c2;
    scanf("%d.%d.%d",&a1,&b1,&c1);
    getchar();
    scanf("%d.%d.%d",&a2,&b2,&c2);

    long long  num1,num2;
    num1 = c1+b1*29+a1*29*17;
    num2 = c2+b2*29+a2*29*17;
    //cout<<num1<<','<<num2<<endl;
    long long  num = num2-num1;
    
    if(num<0)
    {
        cout<<"-";
        swap(num1,num2);
    }

    int a,b,c;
    
    a = num/(29*17);
    num-= (a*29*17);
    b = num/29;
    num -= b*29;
    c = num;
    cout<<abs(a)<<'.'<<abs(b)<<'.'<<abs(c);
    return 0;
}
