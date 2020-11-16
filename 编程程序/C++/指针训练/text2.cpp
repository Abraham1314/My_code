#include<iostream>

#define n  10

using namespace std ;

int main()
{
    int a[3][2]={1,2,3,4,5,6} ,i ;
    int *p = a[0] ;
    for(i=0 ; i<6 ; i++)
    {
        //cout << p[i] ;

        cout << *(p+i) ;
        if(i<5)
        {
            cout << "," ;
        }
    }
    

}