#include <iostream>
#include <string.h>

using namespace std ;

class Student {
	private:
		float score ;
		int age ;
		int no;
	public:
		void SetVal(int no, int age, float score);
		void PrintVal();
};

void Student::SetVal(int no, int age, float score) {
	this->no;
	this->age;
	this->score;
}

void Student::PrintVal() {
	cout << "Ñ§ºÅ£º" << no << endl;
	cout << "ÄêÁä£º" << age << endl ;
	cout << "³É¼¨£º" << score << endl ;
}

int main() {
	Student W;
	W.SetVal(53, 22, 450);
	W.PrintVal();
}