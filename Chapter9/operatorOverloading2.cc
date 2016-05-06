#include <iostream>

using namespace std;

class ChulSoo{
private:
    int age;
public:
    ChulSoo(int age){
        this->age = age;


    }

    ChulSoo operator+(const ChulSoo& chulsooObj){

        cout << "Chulsoo operator + " << endl;
        ChulSoo chulsoo(this->age + chulsooObj.age);
        return chulsoo;
    }

    void introduce(){
        cout << "Chulsoo's age is " << age << endl;
    }

    friend ChulSoo operator+(const ChulSoo& obj1,const ChulSoo& obj2);

};


ChulSoo operator+(const ChulSoo& obj1,const ChulSoo& obj2){

    cout << "global operator + " << endl;

    ChulSoo c(obj1.age + obj2.age);
    return c;
}


int main(){

    ChulSoo c1(20);
    ChulSoo c2 = c1 + 10;
    c2.introduce();

    ChulSoo c3 = 10 +c2;
    c3.introduce();

    return 0;
}