#include<iostream>
#include<climits>

#define ZERO 0

int main(){
    using namespace std ;
    short sam = SHRT_MAX;
    unsigned short num = USHRT_MAX ;
    unsigned short sue = sam ;

    cout << "unsigned short 能容纳的值为：" << num << endl ;
    cout << "Sam has " << sam << "  dollars and Sue has " << sue ;
    cout << " dollars deposited. " << endl 
         << "Add $1 to each account ." << endl << "Now  " ;
    sam += 1 ;
    sue += 1 ;
    cout << "Sam has " << sam << "  dollars and Sue has " << sue ;
    cout << " dollars deposited.\nPoor sam!" << endl ;
    
    sam = ZERO ;
    sue = ZERO ;
    cout << "Sam has " << sam << " dollars and Sue has " << sue ;
    cout << " dollar deposited ." << endl ;
    cout << "Take $1 from each account." << endl << "Now" ;
    sam -= 1 ;
    sue -= 1 ;
    cout << " Sam has   " << sam << " dollars and Sue has " << sue ;
    cout << " dollars deposited." << endl << "Lucky Sue !" << endl ;
    return 0 ; 
} 