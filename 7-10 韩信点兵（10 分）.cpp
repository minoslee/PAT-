#include <iostream>
#include <string>
using namespace std;
int main()
{

    for(int i = 1; ; i++)
    {
        if(i%5 == 1)
        {
            if(i % 6 == 5)
            {
                if(i % 7 == 4)
                {
                    if(i %11 == 10)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
