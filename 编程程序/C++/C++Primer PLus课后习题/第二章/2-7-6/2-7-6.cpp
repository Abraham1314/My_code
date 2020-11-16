#include<iostream>

using namespace std ;

int equ(int num)
{
	return 63240*num ;
}

int main()
{
	int lyear ;
	cout << "请输入要转换的光年数据" << endl ;
	cin >> lyear ;
	cout << lyear << "  光年等于" << equ(lyear) << " 年" << endl ;
}

