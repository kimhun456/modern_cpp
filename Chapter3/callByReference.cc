#include <iostream>
#include <cstdio>

using namespace std;

class Restaurant {
public :
	int steakPrice;
};

class ChulSoo {
public :
  // 레퍼런스를 보낸다.
	int eat(int&);

};
// 레퍼런스를 보낸다.
int ChulSoo::eat(int &SteakNum) {

	// *steakNum 으로 쓰지 않아도 된다.->> 포인터가 아니다.
	SteakNum = 1000;
	cout << "Chulsoo is eating " << endl;

	return SteakNum;
}


int main() {

	ChulSoo ch;
	Restaurant restaurant;
	restaurant.steakPrice = 200000;
	
	cout << "철수가 먹은 스테이크는 : " << ch.eat(restaurant.steakPrice) << endl;
	cout << "원래 스테이크는 : " << restaurant.steakPrice << endl;

	return 0;
}
