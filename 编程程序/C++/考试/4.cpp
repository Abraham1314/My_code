#include<iostream>
using namespace std ;
void fun(int) ;
int main()
{
    int m;
    cout<<"请输入一个数字：";
    cin >> m;
    fun(m);
    return 0;
}

void fun(int x)
{
    int num,y;
    for(y=x;y>=1;)
    {
        num=y%10;
        cout<<num;
        x=x/10;
        y=x;
    }
}
