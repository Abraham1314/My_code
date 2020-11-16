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
    cout << "学号是：" << stu_num;
    cout << "数学分数是：" << math_score;
    cout << "语文分数是：" << chinese_score; 
}

int main(){
    string name ;
    cout <<"请输入名字：";
    cin >> name ;
    int stu_num;
    cout <<"请输入学号：";
    cin >> stu_num ;
    float math_score ;
    cout <<"请输入数学成绩：";
    cin >> math_score;
    float chinese_score;
    cout <<"请输入语文成绩：";
    cin >> chinese_score ;
    cout << name << " 同学的" << endl; 
    Score stu;
    stu.set_stu(stu_num,math_score,chinese_score);
    stu.printout();
}