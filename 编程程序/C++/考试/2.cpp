#include<iostream>

using namespace std ;

void fun (int m)
{
    cout<<"ʮ������ " <<m<<" ת��Ϊʮ������Ϊ��"<<hex<<m<<endl;
}

int main()
{
  int n;
  cout<<"������һ��ʮ�������֣�" ;
  cin >> n ;
  fun(n);
}