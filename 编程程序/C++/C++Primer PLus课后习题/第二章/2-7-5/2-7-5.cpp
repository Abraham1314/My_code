#include<iostream>

using namespace std ;

double equ(double num)
{
	return 1.8*num+32.0 ;
}

int main()
{
	double num ;
	cout << "������һ�����϶ȣ�" << endl ;
	cin >> num ;
	cout << "ת������¶�Ϊ��" << equ(num) << endl ; 

}
