#include<iostream>

using namespace std ;

void fun (int m)
{
    cout<<"十进制数 " <<m<<" 转换为十六进制为："<<hex<<m<<endl;
}

int main()
{
  int n;
  cout<<"请输入一个十进制数字：" ;
  cin >> n ;
  fun(n);
}