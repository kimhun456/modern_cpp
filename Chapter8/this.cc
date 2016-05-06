#include <iostream>

using namespace std;

class Chulsoo{
private:
    int age;

public:
    Chulsoo(int age){

        this->age = age;
        cout << "철수 생성자 생성 완료 " << endl;
    }
    void setAge(int age){
        this->age = age;
    }

    int getAge(){
        return age;
    }

    void introduce(){
        cout << "철수의 나이는 " <<age <<"입니다. " << endl;
    }

    Chulsoo *returnThisPointer(){
        return this;
    }

    // 애는 동작하지 않는당!!.
    Chulsoo returnThis(){
        return *this;
    }

    Chulsoo& returnThisRef(){
        return *this;
    }

};


int main(){

    Chulsoo chulsoo1(32);
    chulsoo1.introduce();

    chulsoo1.setAge(22);
    chulsoo1.introduce();




    return 0;
}
