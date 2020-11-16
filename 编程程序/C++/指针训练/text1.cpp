#include<iostream>

#define n  10

using namespace std ;

void input(int *p , int num)
{
    int i ; 
    cout << "������ʮ������" << endl ;
    for (i=0 ; i< num ; i++)
    {
        cin >> *(p+i) ;
    }
}

int main()
{
    int a[n], *p , i;
    p = a;
    input(p,n) ;
    //cout << *(++p) << endl ;
    
    for(i=0 ; i < (sizeof(a)/sizeof(int))/2 ; i++)
    {
        *(p+i) = *(p+i) ^ *(p+9-i) ;
        *(p+9-i) = *(p+i) ^ *(p+9-i) ;
        *(p+i) = *(p+i) ^ *(p+9-i) ;
    }

    for(i=0 ; i<10 ; i++)
    {
        cout << *(p+i) ;
        if(i<9)
        {
            cout << "," ;
        } 
    }

    cout << endl ;
}