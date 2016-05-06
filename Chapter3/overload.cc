#include <iostream>

using namespace std;


class Chulsoo{

	public :

		void Eat(void);
		void Eat(int steakNum);
		void Eat(double steakWeight);
		void Eat(int steakNum1, int steakNum2);
};


int main(){

	Chulsoo chulsoo;

	chulsoo.Eat();
	chulsoo.Eat(20000);
	chulsoo.Eat(500.5);
	chulsoo.Eat(20000.300000);
	return 0;
}


void Chulsoo::Eat(void){

	cout << "Chulsoo is eating SteakNow " << endl;

}
void Chulsoo::Eat(int steakNum){

	cout << "Chulsoo is eating  " << steakNum <<"SteakNow " << endl;

}
void Chulsoo::Eat(double steakWeight){

	cout << "Chulsoo" << steakWeight << "is eating SteakNow " << endl;

}
