
/*
  람다는 약간 익명 함수 같은 느낌으로 쓰면 될듯하다.
  inline과 비슷하게 정의 호출을 한번에 할수 있는 익명함수느낌;
*/

#include <iostream>

using namespace std;

class Chulsoo{
  public :
    int count;
};

int main(){

    Chulsoo chulsoo;
    chulsoo.count = 1;

    for(int i=0;i<10;i++){
        //[=] 모든 변수를 값으로 받는다.
        //[&] 모든 변수를 참조로 받는다.
        //[=,&para, &para2] para, para2는 참조로 받고 나머지는 값으로 받게 한다.
        //[] 외부변수를 참조 받지 않는다.
        [&]{
            cout << "eat Lamda() Chulsoo eats "
            << chulsoo.count++  << endl;
        }();

    }
    return 0;
}


/*
[&]{
    cout << "eat Lamda() Chulsoo eats "
    << chulsoo.count++  << endl;
}();

*/

/*

for(int i=0;i<10;i++){
    [=](int steakWeight){
        cout << "eat Lamda() Chulsoo eats "
        << chulsoo.count++ << steakWeight <<endl;
        이부분에서 이미 람다 함수는 const한정자로 전달하기 때문에 수정 할 수 없다.
    }(1000);

}

*/
