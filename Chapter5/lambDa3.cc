
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

        // mutable --- 잘 변할 수 있는.
        // 외부변수를 수정 할 수는 없지만 오류가 생긴다
        // 즉 아래 코드의 실행 결과는 계속 count 가 1로 유지된다는 뜻이다.
        [=](int weight) mutable {
            cout << "eat Lamda() Chulsoo eats "
            << chulsoo.count++ << "count's" << weight << "(g) steaks " << endl;
        }(100);

    }

    return 0;
}
