/*
7-3 ˵����-��ǿ�棨20 �֣�
����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ��
�����������һ��������������һ���ڸ����ܳ��Ȳ�����500 000���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮�������ɸ��ո�ֿ���

�����ʽ��
ÿ���������������ռһ�У���������ľ��ӣ����ұ�֤���ʼ�ֻ��1���ո�

����������
Hello World   Here I Come
���������
Come I Here World Hello
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string s;
    stack<string>q;
    while(cin>>s)
    {
        q.push(s);
    }
    if(!q.empty())
    {
        cout<<q.top();
        q.pop();
    }
    while(!q.empty())
    {
        cout<<' '<<q.top();
        q.pop();
    }
    return 0;
}
