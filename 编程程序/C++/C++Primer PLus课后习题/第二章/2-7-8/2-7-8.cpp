#include<iostream>

using namespace std ;

void result(int hour , int minute)
{
	cout << "Time : " << hour << ":" << minute ;
}

int main()
{
	int hour ,minute ;
	cout << "请输入当前的小时数：" <<endl ;
	cin >> hour ;
	cout << "请输入当前的分钟数："  << endl ;
        cin >> minute ;
	result(hour,minute) ;	
}
