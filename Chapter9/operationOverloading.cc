#include <iostream>

using namespace std;


/*
     operator + 를 사용해서 Chulsoo a =  Chulsoo b + Chulsoo c; 등을 계산하게 할 수 있다.
     이와 같은 연산자를 연산자 오버로딩이라고 부른다.
     operator 키워드를 사용해서 오버로딩 시킬수 있다.
 */

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

    Chulsoo operator+(const Chulsoo& chulsooObj){

        Chulsoo chulsoo(this->age + chulsooObj.age);
        return chulsoo;
    }

    Chulsoo operator-(const Chulsoo& chulsooObj){

        Chulsoo chulsoo(this->age - chulsooObj.age);
        return chulsoo;
    }

    Chulsoo operator*(const Chulsoo& chulsooObj){

        Chulsoo chulsoo(this->age * chulsooObj.age);
        return chulsoo;
    }

    Chulsoo operator/(const Chulsoo& chulsooObj){

        Chulsoo chulsoo(this->age / chulsooObj.age);
        return chulsoo;
    }


};


int main(){

    Chulsoo chulsoo1(32);

    Chulsoo c2(22);

    Chulsoo c = chulsoo1+c2;
    c.introduce();


    return 0;
}
