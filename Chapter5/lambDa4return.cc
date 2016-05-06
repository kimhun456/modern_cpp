#include <iostream>
#include <string>

using namespace std;

class Chulsoo{

public:
    int count = 1;


};


int main(){
    Chulsoo chulsoo;

    // ->string , ->int 등으로 return형을 설정 할 수 있다.
    cout << [&](int weight)->char{
        return 'a';
    }(10) << chulsoo.count <<" chulsoo eat the " << endl;


    return 0;
}
