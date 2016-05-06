#include <iostream>
#include <memory>
#include <cstring>

using namespace std;


class Chulsoo{
private :

public :
    int age;
    Chulsoo(const Chulsoo &source) : age(source.age){
        cout << " Chulsoo :: Chulsoo(const Chulsoo&)"<<endl;
    }

    Chulsoo(int age) :age(age){
        cout << " Chulsoo :: Chulsoo(age)"<<endl;
    }

    void copyConstructorCall(Chulsoo &ch){

    }

    ~Chulsoo(){
        cout << "소멸자!!" <<endl;
    }

};

int main(){

    Chulsoo chulsoo(12);
    // 복사생성자가 호출된다.
    chulsoo.copyConstructorCall(chulsoo);

    cout << "main" << endl;

    return 0;
}
