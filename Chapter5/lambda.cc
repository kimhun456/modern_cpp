#include <iostream>

using namespace std;

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
   
   [](int steakWeight){
     cout << "eatLamda() Chulsoo eats the " << steakWeight <<"g steaks." << endl;
   }(1000);

   [](double weight){
     cout << weight << endl;
   }(123.123);

   return 0;
}
