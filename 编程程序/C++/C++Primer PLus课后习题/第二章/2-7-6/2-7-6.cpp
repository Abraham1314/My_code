#include<iostream>

using namespace std ;

int equ(int num)
{
	return 63240*num ;
}

int main()
{
	int lyear ;
	cout << "������Ҫת���Ĺ�������" << endl ;
	cin >> lyear ;
	cout << lyear << "  �������" << equ(lyear) << " ��" << endl ;
}

