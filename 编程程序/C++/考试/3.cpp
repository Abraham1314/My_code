#include<iostream>
using namespace std ;
void fun(int) ;
int main()
{
    int m;
    cout<<"������һ�����֣�";
    cin >> m;
    fun(m);
    return 0;
}

void fun(int x)
{
    int num;
    num=x%10;
    x=x/10;
    cout<<num;
    if(x>=1) 
    {
        fun(x);
    }
}
