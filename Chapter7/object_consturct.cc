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

    // 동적 할당을 이용한 철수 객체 생성
    Chulsoo* p = new Chulsoo(2);
    cout << p->age << endl;
    delete p;

    std::shared_ptr<Chulsoo> s(std::make_shared<Chulsoo>(2));

    Chulsoo chulsoo(12);

    chulsoo.copyConstructorCall(chulsoo);

    cout << "main" << endl;

    return 0;
}
