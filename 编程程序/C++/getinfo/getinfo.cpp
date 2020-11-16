#include<iostream>

int main()
{
    using namespace std ;

    int carrots ;

    cout << "How many carrots do you have ?" << endl ;
    cin >> carrots ;
   // cout << "Here are tow more" <<  "Now you have " << carrots + 2 << "carrots" <<endl
    cout << "Here are two more ." ;
    carrots = carrots + 2 ;
    cout << "Now you have " <<  carrots << " carrots" << endl ;
}
