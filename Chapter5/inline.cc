#include <iostream>

using namespace std;
/**
    inline 함수는 선언부에서 구현해야 한다.
**/

class Chulsoo{

public:
  void eat(int steakWeight);
  inline void EatInline(int steakWeight){
    cout << "eatInline() Chulsoo eats the " << steakWeight <<"g steaks." << endl;
  };
};


void Chulsoo::eat(int steakWeight){

  cout << "eat() Chulsoo eats the " << steakWeight <<"g steaks." << endl;

}




 int main(int argc, char const *argv[]) {

   Chulsoo chulsoo;

   chulsoo.eat(123);
   chulsoo.EatInline(123);


   return 0;
}
