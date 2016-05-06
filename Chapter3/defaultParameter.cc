#include <iostream>
#include <cstdio>

using namespace std;


class ChulSoo {
public :
	void eat(void);
	void eat(int steakNum);  
	void eat(double SteakWeight);
	void eat(int SteakNum,double SteakWeight);

};

void ChulSoo::eat() {

	cout << "Chulsoo eat steaks" << endl;
}
void ChulSoo::eat(int SteakNum) {

	cout << "Chulsoo eat "<<SteakNum <<"'s Steak" << endl;

}
void ChulSoo::eat(double SteakWeight) {

	cout << "Chulsoo eats " << SteakWeight << "grams of Steaks"<< endl;
}
void ChulSoo::eat(int SteakNum, double SteakWeight) {

	cout << "Chulsoo eat " << SteakNum <<"'s steaks and "<< SteakWeight << endl;
}

int main() {

	ChulSoo chulSoo;

	chulSoo.eat();
	chulSoo.eat(112);
	chulSoo.eat(11.2);
	chulSoo.eat(123,1233);

	return 0;
}
