#include<iostream>

using namespace std;

int main()
{
	char ch ='M';
	int  i = ch ;
	cout << "The Ascll code for " << ch << "  is " << i << endl;

	cout << "Add one to the cahracter code: " << endl ;
	ch = ch + 1 ;
	i = ch ;
	cout << "The Ascll code for  " << ch << " is " <<  i <<  endl ;

	cout << "Dsiplaying char ch using cout.put(ch)  "   ;
	cout.put(ch) ;

	cout.put('!') ;
	cout << endl <<  "Done" << endl;
	
	return 0;
}