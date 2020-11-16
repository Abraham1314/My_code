#include<iostream>
#include<cstring>

#define NCE 3 

using namespace std ;


void sorenameNo(string p[] , int n) ;

int main(){
    int i ;
    string name[]={"张三","李四","王麻子"};
    string no[]={"1811010001","1811010002","1811010003"};
    sorenameNo(name,NCE);
    for(i=0;i<NCE;i++)
    {
        cout << name[i] ;
    }
    sorenameNo(no,NCE);
    for(i=0;i<NCE;i++)
    {
        cout << no[i] ;
    }
    return 0 ;
}

void sorenameNo(string p[] , int n) {
    string q;
    int i,j ;
    for (j=0;j<n-1;j++)
        {
            for(i=0;i<n-j;i++)
            {

            }
        }
}