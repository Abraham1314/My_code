#include<iostream>
#include<string.h>
using namespace std ;

class Score{
    public:
        Score();
        void set_stu(int stu_num , float math_score , float chinese_score);
        void printout();
    private:
        int stu_num ;
        float math_score ;
        float chinese_score; 
};

Score::Score(){
    math_score=100;
    chinese_score=100;

}

Score::Score(int stu_num , float math_score , float chinese_score){
    this->stu_num ; 
    this->math_score;
    this->chinese_score;
}

void Score::set_stu(int stu_num , float math_score , float chinese_score){
    this->stu_num ; 
    this->math_score;
    this->chinese_score;
}

void Score::printout(){
    cout << "ѧ���ǣ�" << stu_num;
    cout << "��ѧ�����ǣ�" << math_score;
    cout << "���ķ����ǣ�" << chinese_score; 
}

int main(){
    string name ;
    cout <<"���������֣�";
    cin >> name ;
    int stu_num;
    cout <<"������ѧ�ţ�";
    cin >> stu_num ;
    float math_score ;
    cout <<"��������ѧ�ɼ���";
    cin >> math_score;
    float chinese_score;
    cout <<"���������ĳɼ���";
    cin >> chinese_score ;
    cout << name << " ͬѧ��" << endl; 
    Score stu;
    stu.set_stu(stu_num,math_score,chinese_score);
    stu.printout();
}