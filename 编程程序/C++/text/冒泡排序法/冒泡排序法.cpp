#include<iostream>
#define M 10

using namespace std ;

int main()
{
	int a[M] ;
	int i , j , t ;
	cout << "��������Ҫ�����ʮ������" << endl ;
	for (i=0 ; i<M ; i++)
	{
		cin >> a[i] ;
	}     
	for (i=0 ; i<M ; i++)
	{
		cout << a[i] << " " ;
	}

	cout << endl ;

	for (j=0 ; j<M-1 ; j++)
	{
		for (i=0 ; i<M-1-j ; i++)
		{
			if (a[i] > a[i+1])
			{
				a[i] = a[i]^a[i+1] ;
				a[i+1] = a[i]^a[i+1] ;
				a[i] = a[i]^a[i+1] ;
			}
		}
	}
	 for (i=0 ; i<M ; i++)        
	 {                
		 cout << a[i] << " ";        
	 }
	 cout << endl ;
}
