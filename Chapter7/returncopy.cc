#include <iostream>
#include <memory>
#include <cstring>

using namespace std;


class Chulsoo{
private :
    int age;
public :

    Chulsoo(const Chulsoo &source) : age(source.age){
        cout << " Chulsoo :: Chulsoo(const Chulsoo&)"<<endl;
    }

    Chulsoo(int age) :age(age){
        cout << " Chulsoo :: Chulsoo(age)"<<endl;
    }

    Chulsoo(Chulsoo &&ths) : age(ths.age)
    {
        cout << " move 연산자 호출"<<endl;

    }

    void copyConstructorCall(Chulsoo ch){

    }

    Chulsoo copyConstructorCall2(){
        Chulsoo ch(23);
        return ch;
    }

    ~Chulsoo(){
        cout << "소멸자!!" <<endl;
    }
    int getAge(){
        return age;
    }

};

int main(){

    Chulsoo chulsoo(12);
    Chulsoo s = chulsoo.copyConstructorCall2();

    cout << chulsoo.getAge() << endl;


    cout << "main end" << endl;
    return 0;
}
