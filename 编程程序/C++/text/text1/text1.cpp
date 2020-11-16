#include<iostream>

using namespace std ;

void add(int a , int b )
{
	int result ;
	result = a + b ;
	cout << result << endl ;
}

void add(int a , int b , int c)
{
	int result ; 
	result = a + b + c ;
	cout << result << endl ;
}

void add(double a , double b)
{
	double result ; 
	result = a + b ;
	cout << result << endl ;
}

int main()
{
	add(2.1 , 3.1 , 3) ; 
	return 0 ;
}

