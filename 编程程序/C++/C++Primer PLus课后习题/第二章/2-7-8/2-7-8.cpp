#include<iostream>

using namespace std ;

void result(int hour , int minute)
{
	cout << "Time : " << hour << ":" << minute ;
}

int main()
{
	int hour ,minute ;
	cout << "�����뵱ǰ��Сʱ����" <<endl ;
	cin >> hour ;
	cout << "�����뵱ǰ�ķ�������"  << endl ;
        cin >> minute ;
	result(hour,minute) ;	
}
